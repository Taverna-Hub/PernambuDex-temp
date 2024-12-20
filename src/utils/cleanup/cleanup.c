#include "cleanup.h"
#include "raylib.h"

void UnloadAssets(Assets assets)
{
  UnloadTexture(assets.pokedexBack);
  UnloadTexture(assets.boaViagemMenu);
  UnloadTexture(assets.boaViagemPlay);
  UnloadTexture(assets.olindaMenu);
  UnloadTexture(assets.olindaPlay);
  UnloadTexture(assets.noivaMenu);
  UnloadTexture(assets.noivaPlay);
  UnloadTexture(assets.pedraMenu);
  UnloadTexture(assets.pedraPlay);
  UnloadTexture(assets.feiraMenu);
  UnloadTexture(assets.feiraPlay);
  UnloadTexture(assets.playButton);
  UnloadTexture(assets.mastersButton);
  UnloadTexture(assets.leaveButtonBlue);
  UnloadTexture(assets.boaViagemButtonBlue);
  UnloadTexture(assets.olindaButtonBlue);
  UnloadTexture(assets.noivaButtonBlue);
  UnloadTexture(assets.pedraButtonBlue);
  UnloadTexture(assets.feiraButtonBlue);
  UnloadTexture(assets.leaveButtonRed);
  UnloadTexture(assets.boaViagemButtonRed);
  UnloadTexture(assets.olindaButtonRed);
  UnloadTexture(assets.noivaButtonRed);
  UnloadTexture(assets.pedraButtonRed);
  UnloadTexture(assets.feiraButtonRed);
  UnloadTexture(assets.pernamBall);

  UnloadTexture(assets.confirmButton);
  UnloadTexture(assets.cyndaquill);
  UnloadTexture(assets.quilava);
  UnloadTexture(assets.typhlosion);
  UnloadTexture(assets.EncantoItamaracaButtonBlue);
  UnloadTexture(assets.EncantoItamaracaButtonRed);
  UnloadTexture(assets.PraiaLimpaButtonBlue);
  UnloadTexture(assets.PraiaLimpaButtonRed);
  UnloadTexture(assets.SinalFarolButtonBlue);
  UnloadTexture(assets.SinalFarolButtonRed);

  UnloadTexture(assets.itemEncanto_1);
  UnloadTexture(assets.itemEncanto_2);
  UnloadTexture(assets.itemEncanto_3);
  UnloadTexture(assets.itemFarol_1);
  UnloadTexture(assets.itemFarol_2);
  UnloadTexture(assets.itemFarol_3);
  UnloadTexture(assets.itemPraiaLimpa_1);
  UnloadTexture(assets.itemPraiaLimpa_2);
  UnloadTexture(assets.itemPraiaLimpa_3);

  UnloadTexture(assets.trubbish);

  UnloadTexture(assets.garchomp);
  UnloadTexture(assets.magikarp);
  UnloadTexture(assets.sharpedo);
  UnloadTexture(assets.vaporeon);
  UnloadTexture(assets.wailord);

  UnloadTexture(assets.chandelure);
  UnloadTexture(assets.darkrai);
  UnloadTexture(assets.haunter);
  UnloadTexture(assets.mismagius);
  UnloadTexture(assets.zoroark);

  UnloadTexture(assets.cacnea);
  UnloadTexture(assets.flygon);
  UnloadTexture(assets.groudon);
  UnloadTexture(assets.mandibuzz);
  UnloadTexture(assets.sandile);

  UnloadTexture(assets.hoOh);
  UnloadTexture(assets.ninjask);
  UnloadTexture(assets.pidove);
  UnloadTexture(assets.sweallow);
  UnloadTexture(assets.yammega);

  //------------------------------------

  UnloadTexture(assets.trubbishBlack);

  UnloadTexture(assets.garchompBlack);
  UnloadTexture(assets.magikarpBlack);
  UnloadTexture(assets.sharpedoBlack);
  UnloadTexture(assets.vaporeonBlack);
  UnloadTexture(assets.wailordBlack);

  UnloadTexture(assets.chandelureBlack);
  UnloadTexture(assets.darkraiBlack);
  UnloadTexture(assets.haunterBlack);
  UnloadTexture(assets.mismagiusBlack);
  UnloadTexture(assets.zoroarkBlack);

  UnloadTexture(assets.cacneaBlack);
  UnloadTexture(assets.flygonBlack);
  UnloadTexture(assets.groudonBlack);
  UnloadTexture(assets.mandibuzzBlack);
  UnloadTexture(assets.sandileBlack);

  UnloadTexture(assets.hoOhBlack);
  UnloadTexture(assets.ninjaskBlack);
  UnloadTexture(assets.pidoveBlack);
  UnloadTexture(assets.sweallowBlack);
  UnloadTexture(assets.yammegaBlack);

  UnloadTexture(assets.unknownPokemon);

  UnloadTexture(assets.eventCircle);
  UnloadTexture(assets.eventRectangle);
  UnloadTexture(assets.eventIndicator);
  UnloadTexture(assets.captureFailed);

  UnloadTexture(assets.templateBtnRed);
  UnloadTexture(assets.templateBtnBlue);
  UnloadTexture(assets.pokedex);

  UnloadTexture(assets.pernambucoFlag);

  // Animation
  UnloadTexture(assets.captureNet1);
  UnloadTexture(assets.captureNet2);
  UnloadTexture(assets.captureNet3);
  UnloadTexture(assets.captureNet4);

  UnloadTexture(assets.captureFishing1);
  UnloadTexture(assets.captureFishing2);
  UnloadTexture(assets.captureFishing3);

  UnloadTexture(assets.captureTrap1);
  UnloadTexture(assets.captureTrap2);
  UnloadTexture(assets.captureCage);

  UnloadTexture(assets.captureGhostbusters1);
  UnloadTexture(assets.captureGhostbusters2);
  UnloadTexture(assets.captureGhostbusters3);
  UnloadTexture(assets.captureGhostbusters4);
  UnloadTexture(assets.captureGhostbusters5);
  UnloadTexture(assets.captureGhostbusters6);
  UnloadTexture(assets.captureGhostbusters7);
  UnloadTexture(assets.pokedexBack);

  UnloadTexture(assets.spaceButtonDefault);
  UnloadTexture(assets.spaceButtonPressed);
  UnloadTexture(assets.logoBanner);

  UnloadFont(assets.nunito);
}
