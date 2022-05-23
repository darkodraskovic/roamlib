#include "player.h"

#include <stdlib.h>

Entity* CreatePlayer(int x, int y) {
  Entity* player = calloc(1, sizeof(Entity));

  player->position = (Position){x, y};
  player->ch = '@';

  return player;
}

void HandleInput(Map* map, int input) {
  Position dest = player->position;

  switch (input) {
    case 'w':
      dest.y--;
      break;
    case 's':
      dest.y++;
      break;
    case 'a':
      dest.x--;
      break;
    case 'd':
      dest.x++;
      break;
    default:
      break;
  }
  MovePlayer(map, dest);
}

void MovePlayer(Map* map, Position dest) {
  if (map->tiles[dest.y][dest.x].walkable) {
    player->position.x = dest.x;
    player->position.y = dest.y;
  }
}
