#include "draw.h"

void DrawMap(Map* map) {
  for (int y = 0; y < map->height; y++) {
    for (int x = 0; x < map->width; x++) {
      DrawChar(map->tiles[y][x].ch, x, y);
    }
  }
}

void DrawEntity(Entity* entity) { DrawChar(entity->ch, entity->position.x, entity->position.y); }
