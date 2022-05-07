#ifndef ENTITY_H
#define ENTITY_H

typedef struct {
  int y;
  int x;
} Position;

typedef struct {
  Position position;
  char ch;
} Entity;

#endif
