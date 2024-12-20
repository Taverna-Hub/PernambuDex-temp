#ifndef CONSTANTS_H
#define CONSTANTS_H

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 720
#define BASE_PRICE 5

#include "raylib.h"
typedef enum Screen
{
  LIXO = -1,
  MENU = 0,
  SELECT_PLACE = 1,
  BOA_VIAGEM = 2,
  NOIVA = 3,
  OLINDA = 4,
  PEDRA = 5,
  FEIRA = 6,
  POKEDEX = 7
} Screen;

typedef enum Rarity
{
  TRASH = 0,
  COMMON = 1,
  RARE = 2,
  LEGENDARY = 3
} Rarity;

typedef struct Pokemon
{
  int id;
  char *name;
  Rarity rarity;
  Texture2D image;
  Texture2D shadowImage;
  Screen place;
  bool captured;
  int capCont;
} Pokemon;

typedef struct PokeNode
{
  Pokemon pokemon;
  struct PokeNode *next;
} PokeNode;

typedef struct Shopkeeper
{
  Texture2D image;
  int level;
  int x;
  int y;

} Shopkeeper;

typedef struct FrameAndPosition
{
  Texture2D frame;
  Vector2 position;
} FrameAndPosition;

#endif