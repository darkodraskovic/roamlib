#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"
#include "map.h"

Entity* CreatePlayer(int x, int y);
void MovePlayer(Map* map, Position dest);
void HandleInput(Map* map, int input);

extern Entity* player;

#endif
