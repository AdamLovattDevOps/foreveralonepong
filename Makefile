# Forever Alone Pong Makefile
# GUIs are for the weak, and friends let you down.

# Variables
CC = gcc
CFLAGS = -Wall -O2
TARGET = pong
SRC = pong.c
BIN_DIR = forever_alone_pong/bin
DESKTOP_FILE = forever_alone_pong/forever_alone_pong.desktop

# Build the game
all: $(BIN_DIR)/$(TARGET)

# Compile the binary
$(BIN_DIR)/$(TARGET): $(SRC)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $<
	@echo "Forever Alone Pong is ready to crush your dreams. Binary located at $(BIN_DIR)/$(TARGET)"

# Package it with style
package: all
	@echo "Packaging Forever Alone Pong..."
	@mkdir -p forever_alone_pong
	echo "[Desktop Entry]" > $(DESKTOP_FILE)
	echo "Name=Forever Alone Pong" >> $(DESKTOP_FILE)
	echo "Comment=GUIs are for the weak, and friends let you down." >> $(DESKTOP_FILE)
	echo "Exec=bin/$(TARGET)" >> $(DESKTOP_FILE)
	echo "Path=bin" >> $(DESKTOP_FILE)
	echo "Icon=utilities-terminal" >> $(DESKTOP_FILE)
	echo "Terminal=true" >> $(DESKTOP_FILE)
	echo "Type=Application" >> $(DESKTOP_FILE)
	@echo "Packaging complete. Your sadness is ready in 'forever_alone_pong/'"

# Clean up the mess
clean:
	@rm -rf forever_alone_pong
	@echo "Cleaned up. Forever Alone Pong has been ghosted."

# Install to Steam Deck
install: package
	@echo "Installing Forever Alone Pong to your Steam Deck menu..."
	@mkdir -p ~/.local/share/applications
	cp $(DESKTOP_FILE) ~/.local/share/applications/
	chmod +x ~/.local/share/applications/$(notdir $(DESKTOP_FILE))
	@echo "Installation complete. Forever Alone Pong should now appear in your application menu."

# Uninstall because reality sets in
uninstall:
	@rm -f ~/.local/share/applications/$(notdir $(DESKTOP_FILE))
	@echo "Forever Alone Pong has been uninstalled. Back to reality."

.PHONY: all package clean install uninstall
