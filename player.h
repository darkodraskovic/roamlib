#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

Entity* CreatePlayer();
void HandleInput(int input);

extern Entity* player;

#endif
