#include <raylib.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../utils/constants.h"
#include "../../utils/resizeImage/resizeImage.h"
#include "../../utils/init/init.h"
#include "../../utils/cleanup/cleanup.h"
#include "../../utils/button/button.h"
#include "../../utils/capture/capture.h"
#include "../../utils/animation/animation.h"
#include "viagem.h"

static bool handleChoosePokemon();
static void handleShowPokemonCaptured(Assets assets);
static void handleButtons(Assets assets);
static void resetVariables();

static float angle = 0.0f;
static PokeNode *currentPokemon = NULL;
static float timeCounter = 0.0f;
static bool isPokemonChosen = false;
static bool isInArea = false;
static bool isAnimationPlaying = false;

void UpdateBoaViagem(Screen *currentScreen, Vector2 mousePosition, Assets assets)
{
  Rectangle leaveButtonRect = {470, 480, assets.leaveButtonRed.width, assets.leaveButtonRed.height};
  FrameAndPosition frames[] = {
      {assets.captureFishing1, (Vector2){69, 0}},
      {assets.captureFishing2, (Vector2){-12, 0}},
      {assets.captureFishing3, (Vector2){179, 0}},
      {assets.captureFishing3, (Vector2){179, 0}},
  };

  if (CheckCollisionPointRec(mousePosition, leaveButtonRect) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
  {
    *currentScreen = SELECT_PLACE;
    resetVariables();
  }

  if (IsKeyPressed(KEY_SPACE) && !isPokemonChosen)
  {
    isAnimationPlaying = true;
  }
  if (isAnimationPlaying)
  {
    DrawSpriteAnimation(frames, &isAnimationPlaying);
  }

  if (!isPokemonChosen && !isAnimationPlaying)
  {
    DrawTexture(frames[0].frame, frames[0].position.x, WINDOW_HEIGHT - frames[0].frame.height, WHITE);
  }
  else if (isPokemonChosen && !isAnimationPlaying)
  {
    DrawTexture(frames[2].frame, frames[2].position.x, WINDOW_HEIGHT - frames[2].frame.height, WHITE);
  }

  if (isPokemonChosen)
  {
    if (isInArea)
    {
      if (!isAnimationPlaying)
      {
        handleShowPokemonCaptured(assets);
        pokemons[currentPokemon->pokemon.id].captured = true;
      }
    }
    else
    {
      isInArea = handleCaptureCircle(assets);

      currentPokemon->pokemon.shadowImage.width = currentPokemon->pokemon.shadowImage.height = 96;
      DrawTexture(currentPokemon->pokemon.shadowImage, 800, 507, RAYWHITE);
    }
  }
  else
  {
    isPokemonChosen = handleChoosePokemon();
    if (currentPokemon != NULL)
    {
      printf("%s -> ", currentPokemon->pokemon.name);
    }
  }
}

void DrawBoaViagem(Screen *currentScreen, Vector2 mousePosition, Assets assets)
{
  ClearBackground(RAYWHITE);

  imageProps boaViagemBackground = resizeImage(assets.boaViagemPlay);
  DrawTextureEx(assets.boaViagemPlay, (Vector2){boaViagemBackground.x, boaViagemBackground.y}, 0.0f, boaViagemBackground.scale, WHITE);
}

static bool handleChoosePokemon()
{
  timeCounter += GetFrameTime();

  if (!IsKeyPressed(KEY_SPACE))
  {
    if (timeCounter >= 0.5f)
    {
      if (currentPokemon == NULL)
      {
        currentPokemon = boaViagemHead;
      }
      else
      {
        currentPokemon = currentPokemon->next;
      }

      timeCounter = 0.0f;
    }

    return false;
  }
  else
  {
    return true;
  }
}

static void handleShowPokemonCaptured(Assets assets)
{
  Color capturedColor = {21, 106, 196, 255};
  DrawRectangle(0, 182, 1024, 356, capturedColor);
  DrawRectangle(0, 172, 1024, 10, WHITE);
  DrawRectangle(0, 538, 1024, 10, WHITE);
  currentPokemon->pokemon.image.height = 272;
  currentPokemon->pokemon.image.width = 272;
  DrawTexture(currentPokemon->pokemon.image, 371, 150, RAYWHITE);

  Vector2 position = {310, 400};

  char message[100];
  sprintf(message, "Parabéns! %s foi capturado!", currentPokemon->pokemon.name);
  DrawTextEx(assets.nunito, message, position, 32, 1.0f, WHITE);
  handleButtons(assets);
}

static void handleButtons(Assets assets)
{
  assets.leaveButtonRed.width = 84;
  assets.leaveButtonRed.height = 41;
  Rectangle leaveButtonRect = {470, 480, assets.leaveButtonRed.width, assets.leaveButtonRed.height};

  DrawTexture(assets.leaveButtonRed, leaveButtonRect.x, leaveButtonRect.y, RAYWHITE);
}

static void resetVariables()
{
  angle = 0.0f;
  currentPokemon = NULL;
  timeCounter = 0.0f;
  isPokemonChosen = false;
  isInArea = false;
}