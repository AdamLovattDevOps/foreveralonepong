#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For usleep()
#include <termios.h> // For non-blocking keyboard input
#include <fcntl.h>   // For non-blocking keyboard input

#define WIDTH 40
#define HEIGHT 20
#define BALL_SPEED 3 // Lower number = faster ball

// Function prototype for kbhit
int kbhit(void);

// Ball structure
typedef struct {
    int x, y;
    int dx, dy;
} Ball;

// Paddle structure
typedef struct {
    int y;
    int height;
} Paddle;

// Draw the game frame
void draw_frame(Ball ball, Paddle left_paddle, Paddle right_paddle, int left_score, int right_score) {
    system("clear || cls"); // Clear the console
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == 0 || x == WIDTH - 1) {
                printf("|"); // Walls
            } else if (y == 0 || y == HEIGHT - 1) {
                printf("-"); // Top and bottom borders
            } else if (x == ball.x && y == ball.y) {
                printf("O"); // Ball
            } else if (x == 2 && y >= left_paddle.y && y < left_paddle.y + left_paddle.height) {
                printf("#"); // Left paddle
            } else if (x == WIDTH - 3 && y >= right_paddle.y && y < right_paddle.y + right_paddle.height) {
                printf("#"); // Right paddle
            } else {
                printf(" "); // Empty space
            }
        }
        printf("\n");
    }
    printf("Left Score: %d    Right Score: %d\n", left_score, right_score);
}

// Update ball position and handle collisions
void update_ball(Ball *ball, Paddle *left_paddle, Paddle *right_paddle, int *left_score, int *right_score, int *counter) {
    (*counter)++;
    if (*counter < BALL_SPEED) return; // Skip ball update until the counter reaches the speed threshold
    *counter = 0; // Reset counter after updating

    ball->x += ball->dx;
    ball->y += ball->dy;

    // Collision with top and bottom walls
    if (ball->y <= 1 || ball->y >= HEIGHT - 2) {
        ball->dy *= -1;
    }

    // Collision with left paddle
    if (ball->x == 3 && ball->y >= left_paddle->y && ball->y < left_paddle->y + left_paddle->height) {
        ball->dx *= -1;
    }

    // Collision with right paddle
    if (ball->x == WIDTH - 4 && ball->y >= right_paddle->y && ball->y < right_paddle->y + right_paddle->height) {
        ball->dx *= -1;
    }

    // Scoring
    if (ball->x <= 1) {
        (*right_score)++;
        ball->x = WIDTH / 2;
        ball->y = HEIGHT / 2;
        ball->dx = 1;
        ball->dy = (rand() % 2 == 0) ? 1 : -1;
    }

    if (ball->x >= WIDTH - 2) {
        (*left_score)++;
        ball->x = WIDTH / 2;
        ball->y = HEIGHT / 2;
        ball->dx = -1;
        ball->dy = (rand() % 2 == 0) ? 1 : -1;
    }
}

// Handle paddle movement
void update_paddles(Paddle *left_paddle, Paddle *right_paddle) {
    if (kbhit()) {
        char key = getchar();
        // Left paddle controls: W and S
        if (key == 'w' && left_paddle->y > 1) {
            left_paddle->y--;
        } else if (key == 's' && left_paddle->y < HEIGHT - left_paddle->height - 1) {
            left_paddle->y++;
        }

        // Right paddle controls: Up and Down arrows
        if (key == '\033') { // Escape sequence for arrow keys
            getchar(); // Skip the [
            switch (getchar()) {
                case 'A': // Up arrow
                    if (right_paddle->y > 1) {
                        right_paddle->y--;
                    }
                    break;
                case 'B': // Down arrow
                    if (right_paddle->y < HEIGHT - right_paddle->height - 1) {
                        right_paddle->y++;
                    }
                    break;
            }
        }
    }
}

// Non-blocking keyboard input
int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    // Get the terminal settings for stdin
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

int main() {
    Ball ball = {WIDTH / 2, HEIGHT / 2, 1, 1};
    Paddle left_paddle = {HEIGHT / 2 - 2, 4};
    Paddle right_paddle = {HEIGHT / 2 - 2, 4};

    int left_score = 0;
    int right_score = 0;
    int ball_speed_counter = 0; // Counter for slowing down the ball

    while (1) {
        draw_frame(ball, left_paddle, right_paddle, left_score, right_score);
        update_ball(&ball, &left_paddle, &right_paddle, &left_score, &right_score, &ball_speed_counter);
        update_paddles(&left_paddle, &right_paddle);
        usleep(50000); // Adjust speed of the game loop
    }

    return 0;
}