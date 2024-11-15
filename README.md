# Forever Alone Pong

A terminal-based Pong game for those who know: **GUIs are for the weak, and friends let you down.**

## How to Compile & Run
```bash
gcc pong.c -o pong
./pong
```

## Controls

### Left Paddle:
- **Move Up**: Press `W`
- **Move Down**: Press `S`

### Right Paddle:
- **Move Up**: Press Up Arrow `↑`
- **Move Down**: Press Down Arrow `↓`

## Enabling AI for the Left Paddle

If you prefer to let the computer handle the left paddle:
1. During gameplay, press `:` to enter **console mode**.
2. Type the following command to enable AI:
   ```
   ai=on
   ```
3. To disable AI and return to manual control, type:
   ```
   ai=off
   ```

When AI is enabled, the left paddle will automatically track and respond to the ball's position.

⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣶⣶⣶⣶⣦⣤⣄⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣴⣶⠿⠟⠉⠀⠀⠀⠀⠈⠉⠉⠙⠛⠿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⡿⠿⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠙⢿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣶⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠞⠉⣤⠀⠀⠀⠀⠀⢰⡜⢿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⡿⠋⠁⠀⠀⠀⠀⣤⣾⠛⠛⠛⠛⠛⢋⣼⢝⣢⠞⠁⠀⠀⣀⡄⠀⠀⠙⠮⢻⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣴⡿⠋⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠛⠿⣿⡭⠶⠋⠁⠀⠀⣴⣫⣭⣿⣤⡀⠀⠀⠀⠙⢿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢀⣾⠟⠀⠀⠀⠸⣧⠀⠀⣴⠓⢀⣤⠤⣶⣄⠀⠀⠀⢤⡀⠀⠀⣼⢡⡏⣿⠛⣝⣿⢶⠄⠀⠀⠘⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣾⠏⠀⠀⠀⠀⢀⡿⠀⠀⠀⣠⣶⠿⢷⣦⣿⠀⠀⠀⠘⣧⡀⠀⠛⠘⠃⣿⣾⣿⣿⣄⠀⠀⠀⢰⡿⠛⠻⣷⣦⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣾⡟⠀⠀⠀⠀⠀⠀⠀⢠⣤⣤⣿⣿⣤⣴⣎⣿⡀⡀⠀⠀⠀⢙⣶⣄⡀⠀⠬⣭⣾⣻⣯⡄⠠⠴⠶⣖⡒⠒⠒⠶⢤⣀⡈⠉⠙⠛⢻⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⣿⠁⠀⠀⠀⠀⠀⠀⠀⠘⠁⢡⣟⣿⣿⣿⣿⢻⣳⠃⢠⡼⢻⡞⣧⡌⣟⠦⠤⠤⠤⠴⠵⠚⠛⠛⠛⠛⠛⠛⣻⣶⣾⠟⠙⢦⠀⠀⠀⠈⠙⢿⣦⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣸⣿⠀⠀⠀⣀⡴⠂⠀⠀⠀⠀⣄⠙⢯⣿⣿⣷⡿⠋⢀⡼⣿⢽⣯⣈⡟⠻⠀⠀⠀⠀⠀⠀⠀⢠⣤⡄⣲⣽⡿⣻⡿⠋⠀⠀⠈⡇⠀⠀⠀⠀⠀⠙⢿⣤⠀⠀⠀⠀⠀⠀
⠀⠀⠀⣿⡇⠀⠀⠟⠁⠀⠀⠀⠀⠀⠀⠙⠒⢲⣾⡷⢉⡴⠚⠁⠀⠀⠀⠀⠀⢿⡀⠀⠀⠀⢠⣤⢴⣶⣦⣾⡟⢿⡁⣴⠟⢀⡾⠀⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀⠹⣿⣄⠀⠀⠀⠀
⠀⠀⠀⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠀⣿⣿⣞⣯⣀⣄⠀⢠⡀⣤⢠⣄⡀⠻⣀⣤⣭⣷⣾⡿⢟⣫⡉⣣⣼⠟⣧⢀⡞⢀⡴⠀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣆⠀⠀⠀
⠀⠀⠀⣿⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡇⠀⣿⣏⠛⠿⠿⠿⣿⣿⣿⣿⠿⣿⣿⣟⣛⣽⣯⣴⣾⡟⠻⣟⠉⠉⠁⢀⡾⠋⢀⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣇⠀⠀
⠀⠀⠀⣿⠈⣇⠀⠀⠀⠀⠀⠀⠀⠰⣟⠀⠀⠙⣿⠳⢤⣀⡀⢀⣀⣀⠀⠘⢹⠇⠈⠉⠁⠀⠈⠓⠿⠄⠙⢀⣠⠖⠉⣦⣴⢋⣴⠞⠀⠀⠀⠀⠀⠀⢰⡆⠀⠀⠀⠀⠀⠈⢻⣇⠀
⠀⠀⢰⣿⠰⠿⢦⣀⡀⠀⠀⠀⠀⠀⠈⠳⣄⣀⣻⣧⠀⠈⠉⠁⠈⠉⠙⠲⠦⢤⣀⣀⡄⠀⢀⣀⡠⠖⠊⠙⠓⠒⠋⣿⠁⠈⠁⠀⠀⠀⠀⠀⠀⢠⡾⠁⠀⠀⠀⠀⠀⠀⠈⢻⡇
⠀⠀⢸⣿⠀⠓⢶⣯⠉⢠⣤⡀⠀⠀⠀⠀⠀⠉⠉⣿⠂⠀⠳⣄⡀⠀⠀⠀⡀⠀⠉⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⣰⠿⠀⠀⠀⠀⢺⠆⠀⠀⣠⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿
⠀⢀⣾⡇⠀⠀⠀⠙⠀⢸⣷⡇⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⠈⠉⠲⠶⠶⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠾⠀⠀⠀⠀⣸⡆⠀⣸⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⢹
⠀⢸⡿⠀⠀⠀⠀⠀⠀⠨⢿⠇⠀⠀⠀⠀⠀⠀⠀⣆⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠉⠀⣸⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸
⢀⣾⠇⠀⠊⣁⡶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢴⡉⣙⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾
⢸⡿⠀⣰⠞⠉⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣟⠁⠀⠀⠀⠀⠀⠀⠀⠰⠶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠁⠠⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡟
⢸⡇⡀⠈⠀⢀⣠⠞⠁⠀⠀⢶⡆⠀⠀⠀⠀⠀⠀⠀⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠶⠀⠀⣼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡿⠃
⢸⣷⡀⠀⡴⠟⠁⠀⠀⠀⠀⡀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡿⠃⠀
⠀⠙⢷⣄⠀⠀⠀⠀⠀⠀⢸⡇⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣦⠘⠃⠀⠀⠀⠀⠰⠶⠶⣭⡀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠃⠀⠀
⠀⠀⠈⠻⣷⣄⠀⠀⠀⠀⢸⡟⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢧⡄⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⢰⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠁⠀⠀⠀
⠀⠀⠀⠀⠈⠻⣷⣄⠀⠀⢸⡇⠘⣇⠀⠀⠀⠀⠀⠀⣠⠀⠀⠀⠀⠀⠙⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⠟⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⠻⣷⣄⠀⠙⢦⡘⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠏⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣷⣄⠀⠙⠓⠊⠓⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡿⠁⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣷⣄⠀⠀⠀⠀⣝⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣷⣄⣀⣀⣈⣛⣲⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠃⠀⠀⠀⠀⠀⠀⠀⠀⣠⡀⠀⠀⢀⣼⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣥⣀⠀⠈⠙⠓⠦⠀⠀⠠⣤⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⡇⠀⡀⠀⠀⠀⠀⣀⣀⡴⠋⢀⣤⣾⡿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠛⠿⣷⣦⣤⣄⣀⠀⠀⠘⠛⠶⠤⠤⢤⣤⠶⠛⠉⠀⠀⠀⠙⠓⠛⠛⢉⣁⣀⣤⣴⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⠿⣶⣶⣤⣤⣤⣤⣴⣶⣶⣶⣾⡿⠛⠛⠛⠛⠛⠛⠛⠛⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣷⣶⣦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⡿⢻⣿⠈⠉⠻⠿⣷⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⡿⠋⠀⢸⣿⡄⠀⠀⠀⠈⠙⠿⣶⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⠏⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀⠀⠉⠻⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⡿⠋⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣰⣿⡿⠁⠀⠀⠀⠀⠀⠘⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣷⣆⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀