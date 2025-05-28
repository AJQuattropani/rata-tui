#pragma once

#include <ncurses.h>
#include <string>
#include <utility>

namespace rata {
typedef WINDOW _TILE;

class Tile {
 public:
  Tile(void);
  ~Tile();
  Tile(const Tile &);
  Tile(Tile &&) = default;
  auto operator=(const Tile &) -> Tile & = delete;
  auto operator=(Tile &&) -> Tile & = delete;

  auto write(const std::string &msg) -> void;
  auto setCursorPosition(int x, int y) -> void;
  auto writeAt(int x, int y, const std::string &msg) -> void;

  auto getWinPosition() -> std::pair<int, int>;
  auto getWinSize() -> std::pair<int, int>;
  auto getCursorPosition() -> std::pair<int, int>;

 private:
  _TILE *tile_ptr;
};

}
