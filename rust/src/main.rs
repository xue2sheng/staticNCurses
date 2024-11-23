use ncurses::*;

fn main() {
    // Initialize ncurses
    initscr();

    // Print "Hello, world!" to the screen
    addstr("Hello, world!");

    // Refresh the screen to show the output
    refresh();

    // Wait for a key press
    getch();

    // End ncurses mode
    endwin();
}