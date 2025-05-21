#include "ratatui.hpp"

using namespace rata;

TerminalApp::TerminalApp(void) {
  initscr();
  raw(); // prevent use of control chars
  noecho(); // no echo of chars to screen
  keypad(stdscr, TRUE); // enables use of F1, F2, <- -> etc.

}

void TerminalApp::run() {
  for(int key = getch(); key != KEY_F(1); key = getch()) {
    printw("The pressed key is: ");
    attron(A_BOLD);
    printw("%c", key);
    attroff(A_BOLD);
    refresh();
  }
}

TerminalApp::~TerminalApp() {
  
  endwin();
}

