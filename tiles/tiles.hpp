#pragma once

#include <ncurses.h>

namespace rata {
typedef WINDOW _TILE;

class Tile {
public:
  Tile(void);
  ~Tile();
  Tile(const Tile&);
  Tile(Tile&&);
  auto operator=(const Tile&) -> Tile&;
  auto operator=(Tile&&) -> Tile&;
private:
  _TILE *tile_ptr;
};

}
