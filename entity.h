#ifndef ENTITY_H
#define ENTITY_H

typedef struct {
  int x;
  int y;
} Position;

typedef struct {
  Position position;
  char ch;
} Entity;

#endif
