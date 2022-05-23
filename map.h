#ifndef MAP_H
#define MAP_H

#include <stdbool.h>

typedef struct {
  char ch;
  bool walkable;
} Tile;

typedef struct {
  int width;
  int height;
  Tile** tiles;
} Map;

Tile** CreateTiles(int width, int height);
Map* CreateMap(int width, int height);
void FreeMap(Map* map);

extern Map* map;

#endif /* MAP_H */
