#include "tiles.hpp"

using namespace rata;

Tile::Tile() {
  tile_ptr = newwin(10, 30, 5 ,5); // dims, pos
}

Tile::~Tile() {
  delwin(tile_ptr);
}

Tile::Tile(const Tile&) {

}

Tile::Tile(Tile&&) {

}

auto Tile::operator=(const Tile&) -> Tile& {
  this->tile_ptr = newwin(10, 30, 5, 5);

  return *this;
}

auto Tile::operator=(Tile&&) -> Tile& = default;
