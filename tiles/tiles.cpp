#include "./tiles.hpp"

using rata::Tile;

Tile::Tile() {
  tile_ptr = newwin(10, 30, 5, 5);
  // dims, pos
}

Tile::~Tile() {
  delwin(tile_ptr);
}

Tile::Tile(const Tile& tile) {
  tile_ptr = newwin(10, 30, 5, 5);
}

auto Tile::write(const std::string &msg) -> void {
  wprintw(tile_ptr, "%s", msg.c_str());
}

auto Tile::writeAt(int x, int y, const std::string &msg) -> void {
  mvwprintw(tile_ptr, y, x, "%s", msg.c_str());
}

auto Tile::setCursorPosition(int x, int y) -> void {
  wmove(tile_ptr, y, x);
}

auto Tile::getWinPosition() -> std::pair<int, int> {
  return std::pair(getbegx(tile_ptr), getbegy(tile_ptr));
}

auto Tile::getCursorPosition() -> std::pair<int, int> {
  return std::pair(getcurx(tile_ptr), getcury(tile_ptr));
}

auto Tile::getWinSize() -> std::pair<int, int> {
  return std::pair(getmaxx(tile_ptr), getmaxy(tile_ptr));
}


