extern crate ncurses;
use ncurses::*;

#[link(name="SillyLib")]
extern "C" {
    fn SillyLib_create();
    fn SillyLib_destroy();
    //fn SillyLib_find(user: *const i8, configuration: *mut i8, description: *mut i8) -> i32;
}
fn main() {
    // Initialize ncurses
    initscr();

    unsafe {
        SillyLib_create();
        SillyLib_destroy();
    }

    // Print "Hello, world!" to the screen
    let _ = addstr("Hello, world!");

    // Refresh the screen to show the output
    refresh();

    // Wait for a key press
    getch();

    // End ncurses mode
    endwin();
}