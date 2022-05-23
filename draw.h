#ifndef DRAW_H
#define DRAW_H

#include "entity.h"
#include "map.h"

// renderer backend defines this function
extern void DrawChar(const char ch, int x, int y);

void DrawMap(Map* map);
void DrawEntity(Entity* entity);

#endif /* DRAW_H */
