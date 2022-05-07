#include "player.h"

#include <stdlib.h>

Entity* CreatePlayer() {
  Entity* player = calloc(1, sizeof(Entity));

  player->position.x = 0;
  player->position.y = 0;

  player->ch = '@';
  return player;
}

void HandleInput(int input) {
  switch (input) {
    case 'w':
      player->position.y--;
      break;
    case 's':
      player->position.y++;
      break;
    case 'a':
      player->position.x--;
      break;
    case 'd':
      player->position.x++;
      break;
    default:
      break;
  }
}
