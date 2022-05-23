#include "map.h"

#include <stdlib.h>

Tile** CreateTiles(int width, int height) {
  Tile** tiles = calloc(height, sizeof(Tile*));

  for (int y = 0; y < height; y++) {
    tiles[y] = calloc(width, sizeof(Tile));
    for (int x = 0; x < width; x++) {
      tiles[y][x].ch = '.';
      tiles[y][x].walkable = true;
      if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
        tiles[y][x].ch = '#';
        tiles[y][x].walkable = false;
      }
    }
  }

  return tiles;
}

Map* CreateMap(int width, int height) {
  Map* map = calloc(1, sizeof(Map));
  map->tiles = CreateTiles(width, height);
  map->width = width;
  map->height = height;
  return map;
}

void FreeMap(Map* map) {
  for (int y = 0; y < map->height; y++) {
    free(map->tiles[y]);
  }
  free(map);
}
