#pragma once

#include <ncurses.h>

#include <vector>

#include "./tiles/tiles.hpp"

namespace rata {
class TerminalApp {
public:
  TerminalApp(void);
  ~TerminalApp(); 
  void run();
private:
  std::vector<Tile> tiles;
private:
  TerminalApp(const TerminalApp&) = delete;
  TerminalApp(TerminalApp&&) = delete;
  TerminalApp& operator=(const TerminalApp&) = delete;
  TerminalApp& operator=(TerminalApp&&) = delete;
private:
  
};

}
