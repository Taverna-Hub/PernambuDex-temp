#ifndef INIT_H
#define INIT_H

#include "raylib.h"
#include "../constants.h"
typedef struct
{
  Texture2D boaViagemMenu;
  Texture2D boaViagemPlay;

  Texture2D olindaMenu;
  Texture2D olindaPlay;

  Texture2D noivaMenu;
  Texture2D noivaPlay;

  Texture2D pedraMenu;
  Texture2D pedraPlay;

  Texture2D feiraMenu;
  Texture2D feiraPlay;

  Texture2D trapezeSelector;

  Texture2D playButton;
  Texture2D mastersButton;

  Texture2D leaveButtonRed;
  Texture2D leaveButtonBlue;

  Texture2D boaViagemButtonRed;
  Texture2D olindaButtonRed;
  Texture2D noivaButtonRed;
  Texture2D pedraButtonRed;
  Texture2D feiraButtonRed;
  Texture2D PraiaLimpaButtonRed;
  Texture2D SinalFarolButtonRed;
  Texture2D EncantoItamaracaButtonRed;

  Texture2D boaViagemButtonBlue;
  Texture2D olindaButtonBlue;
  Texture2D noivaButtonBlue;
  Texture2D pedraButtonBlue;
  Texture2D feiraButtonBlue;
  Texture2D PraiaLimpaButtonBlue;
  Texture2D SinalFarolButtonBlue;
  Texture2D EncantoItamaracaButtonBlue;

  Texture2D itemEncanto_1;
  Texture2D itemEncanto_2;
  Texture2D itemEncanto_3;

  Texture2D itemFarol_1;
  Texture2D itemFarol_2;
  Texture2D itemFarol_3;

  Texture2D itemPraiaLimpa_1;
  Texture2D itemPraiaLimpa_2;
  Texture2D itemPraiaLimpa_3;

  Texture2D pernamBall;
  Texture2D coin;
  Texture2D confirmButton;

  Texture2D typhlosion;
  Texture2D quilava;
  Texture2D cyndaquill;

  Texture2D speechBubble;

  Texture2D captureCircle;
  Texture2D captureIndicator;

  Texture2D trubbish;

  Texture2D garchomp;
  Texture2D magikarp;
  Texture2D sharpedo;
  Texture2D vaporeon;
  Texture2D wailord;

  Texture2D chandelure;
  Texture2D darkrai;
  Texture2D haunter;
  Texture2D mismagius;
  Texture2D zoroark;

  Texture2D cacnea;
  Texture2D flygon;
  Texture2D groudon;
  Texture2D mandibuzz;
  Texture2D sandile;

  Texture2D hoOh;
  Texture2D ninjask;
  Texture2D pidove;
  Texture2D sweallow;
  Texture2D yammega;

} Assets;

Assets LoadAssets(void);

extern Pokemon pokemons[25];

void initializePokemon(Assets assets);

void initializeCircularList(Pokemon pokemons[], PokeNode **head, PokeNode **tail, int startIndex);

#endif