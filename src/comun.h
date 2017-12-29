/* Definiciones comunes para facilitar portabilidad */

#ifndef _COMUN_H_
#define _COMUN_H_

#if defined(_OPENPANDORA) || defined (_GCW_ZERO)
/* La versión para OpenPandora usa rutas relativas */
#define _RUTAS_RELATIVAS
/* La versión para OpenPandora renderiza internamente a 320x240 */
/* (y reescala por hardware posteriormente a 640x480)           */
#define _RENDER_320_240
#endif

#ifdef _3DS
#define _RENDER_320_240
#define sleep(x) usleep(x*1000*1000)
#endif

#ifdef _PSP2
#define _RENDER_320_240
#endif

#ifdef _3DS
#define RUTA_GRA_INTRO             "romfs:/graphics/intro.png"
#define RUTA_GRA_INTRO2            "romfs:/graphics/intro2.png"
#define RUTA_GRA_TILES             "romfs:/graphics/tiles.png"
#define RUTA_GRA_TEMP              "romfs:/graphics/temp.png"
#define RUTA_GRA_PERGAMINO         "romfs:/graphics/pergamino.png"
#define RUTA_GRA_PERGAMINO_ROJO    "romfs:/graphics/pergaminorojo.png"
#define RUTA_GRA_PERGAMINO_AZUL    "romfs:/graphics/pergaminoazul.png"
#define RUTA_GRA_TITLE_MD          "romfs:/graphics/titlemd.png"
#define RUTA_GRA_ABBEY_MD          "romfs:/graphics/abbeymd.png"
#define RUTA_GRA_TILES_MD          "romfs:/graphics/tilesmd.png"
#define RUTA_GRA_FONDO01_MD        "romfs:/graphics/fondosmd/01.png"
#define RUTA_GRA_FONDO02_MD        "romfs:/graphics/fondosmd/02.png"
#define RUTA_GRA_FONDO03_MD        "romfs:/graphics/fondosmd/03.png"
#define RUTA_GRA_FONDO05_MD        "romfs:/graphics/fondosmd/05.png"
#define RUTA_GRA_FONDO06_MD        "romfs:/graphics/fondosmd/06.png"
#define RUTA_GRA_FONDO07_MD        "romfs:/graphics/fondosmd/07.png"
#define RUTA_GRA_FONDO08_MD        "romfs:/graphics/fondosmd/08.png"
#define RUTA_GRA_FONDO09_MD        "romfs:/graphics/fondosmd/09.png"
#define RUTA_GRA_FONDO10_MD        "romfs:/graphics/fondosmd/10.png"
#define RUTA_GRA_FONDO11_MD        "romfs:/graphics/fondosmd/11.png"
#define RUTA_GRA_FONDO12_MD        "romfs:/graphics/fondosmd/12.png"
#define RUTA_GRA_FONDO13_MD        "romfs:/graphics/fondosmd/13.png"
#define RUTA_GRA_FONDO14_MD        "romfs:/graphics/fondosmd/14.png"
#define RUTA_GRA_FONDO15_MD        "romfs:/graphics/fondosmd/15.png"
#define RUTA_GRA_FONDO16_MD        "romfs:/graphics/fondosmd/16.png"
#define RUTA_GRA_FONDO17_MD        "romfs:/graphics/fondosmd/17.png"
#define RUTA_GRA_FONDO18_MD        "romfs:/graphics/fondosmd/18.png"
#define RUTA_GRA_FONDO19_MD        "romfs:/graphics/fondosmd/19.png"
#define RUTA_GRA_FONDO20_MD        "romfs:/graphics/fondosmd/20.png"
#define RUTA_GRA_FONDO21_MD        "romfs:/graphics/fondosmd/21.png"
#define RUTA_GRA_FONDO22_MD        "romfs:/graphics/fondosmd/22.png"
#define RUTA_GRA_FONDO23_MD        "romfs:/graphics/fondosmd/23.png"
#define RUTA_GRA_FONDO24_MD        "romfs:/graphics/fondosmd/24.png"

#define RUTA_FON_VENICE_CLASSIC    "romfs:/fonts/VeniceClassic.ttf"

/* Ojo, las rutas de mapa y enemigos cambian */
#define RUTA_DAT_MAPA              "romfs:/mapa/mapa.txt"
#define RUTA_DAT_ENEMIGOS          "romfs:/mapa/enemigos.txt"

#define RUTA_MUS_TITLE             "romfs:/music/MainTitleN.wav"
#define RUTA_MUS_GAMEOVER          "romfs:/music/GameOverV2N.wav"
#define RUTA_MUS_PRAYER            "romfs:/music/PrayerofHopeN.wav"
#define RUTA_MUS_MANHUNT           "romfs:/music/ManhuntN.wav"
#define RUTA_MUS_CHURCH            "romfs:/music/AreaIChurchN.wav"
#define RUTA_MUS_WOOD              "romfs:/music/ManhuntwoodN.wav"
#define RUTA_MUS_HANGMAN           "romfs:/music/HangmansTree.wav"
#define RUTA_MUS_CAVES             "romfs:/music/AreaIICavesV2N.wav"
#define RUTA_MUS_EVIL_FIGHT        "romfs:/music/EvilFightN.wav"
#define RUTA_MUS_HELL              "romfs:/music/AreaIIIHellN.wav"

#define RUTA_SFX_SHOOT             "romfs:/sounds/shoot.wav"
#define RUTA_SFX_DOOR              "romfs:/sounds/doorfx.wav"
#define RUTA_SFX_ITEM              "romfs:/sounds/Item.wav"
#define RUTA_SFX_JUMP              "romfs:/sounds/jump.wav"
#define RUTA_SFX_SLASH             "romfs:/sounds/slash.wav"
#define RUTA_SFX_MECHANISM         "romfs:/sounds/mechanismn.wav"
#define RUTA_SFX_DEATH             "romfs:/sounds/onedeathn.wav"
#define RUTA_INTRO


#elif defined(_RUTAS_RELATIVAS)
#define RUTA_GRA_INTRO             "graphics/intro.png"
#define RUTA_GRA_INTRO2            "graphics/intro2.png"
#define RUTA_GRA_TILES             "graphics/tiles.png"
#define RUTA_GRA_TEMP              "graphics/temp.png"
#define RUTA_GRA_PERGAMINO         "graphics/pergamino.png"
#define RUTA_GRA_PERGAMINO_ROJO    "graphics/pergaminorojo.png"
#define RUTA_GRA_PERGAMINO_AZUL    "graphics/pergaminoazul.png"
#define RUTA_GRA_TITLE_MD          "graphics/titlemd.png"
#define RUTA_GRA_ABBEY_MD          "graphics/abbeymd.png"
#define RUTA_GRA_TILES_MD          "graphics/tilesmd.png"
#define RUTA_GRA_FONDO01_MD        "graphics/fondosmd/01.png"
#define RUTA_GRA_FONDO02_MD        "graphics/fondosmd/02.png"
#define RUTA_GRA_FONDO03_MD        "graphics/fondosmd/03.png"
#define RUTA_GRA_FONDO05_MD        "graphics/fondosmd/05.png"
#define RUTA_GRA_FONDO06_MD        "graphics/fondosmd/06.png"
#define RUTA_GRA_FONDO07_MD        "graphics/fondosmd/07.png"
#define RUTA_GRA_FONDO08_MD        "graphics/fondosmd/08.png"
#define RUTA_GRA_FONDO09_MD        "graphics/fondosmd/09.png"
#define RUTA_GRA_FONDO10_MD        "graphics/fondosmd/10.png"
#define RUTA_GRA_FONDO11_MD        "graphics/fondosmd/11.png"
#define RUTA_GRA_FONDO12_MD        "graphics/fondosmd/12.png"
#define RUTA_GRA_FONDO13_MD        "graphics/fondosmd/13.png"
#define RUTA_GRA_FONDO14_MD        "graphics/fondosmd/14.png"
#define RUTA_GRA_FONDO15_MD        "graphics/fondosmd/15.png"
#define RUTA_GRA_FONDO16_MD        "graphics/fondosmd/16.png"
#define RUTA_GRA_FONDO17_MD        "graphics/fondosmd/17.png"
#define RUTA_GRA_FONDO18_MD        "graphics/fondosmd/18.png"
#define RUTA_GRA_FONDO19_MD        "graphics/fondosmd/19.png"
#define RUTA_GRA_FONDO20_MD        "graphics/fondosmd/20.png"
#define RUTA_GRA_FONDO21_MD        "graphics/fondosmd/21.png"
#define RUTA_GRA_FONDO22_MD        "graphics/fondosmd/22.png"
#define RUTA_GRA_FONDO23_MD        "graphics/fondosmd/23.png"
#define RUTA_GRA_FONDO24_MD        "graphics/fondosmd/24.png"

#define RUTA_FON_VENICE_CLASSIC    "fonts/VeniceClassic.ttf"

/* Ojo, las rutas de mapa y enemigos cambian */
#define RUTA_DAT_MAPA              "mapa/mapa.txt"
#define RUTA_DAT_ENEMIGOS          "mapa/enemigos.txt"

#define RUTA_MUS_TITLE             "music/MainTitleN.wav"
#define RUTA_MUS_GAMEOVER          "music/GameOverV2N.wav"
#define RUTA_MUS_PRAYER            "music/PrayerofHopeN.wav"
#define RUTA_MUS_MANHUNT           "music/ManhuntN.wav"
#define RUTA_MUS_CHURCH            "music/AreaIChurchN.wav"
#define RUTA_MUS_WOOD              "music/ManhuntwoodN.wav"
#define RUTA_MUS_HANGMAN           "music/HangmansTree.wav"
#define RUTA_MUS_CAVES             "music/AreaIICavesV2N.wav"
#define RUTA_MUS_EVIL_FIGHT        "music/EvilFightN.wav"
#define RUTA_MUS_HELL              "music/AreaIIIHellN.wav"

#define RUTA_SFX_SHOOT             "sounds/shoot.wav"
#define RUTA_SFX_DOOR              "sounds/doorfx.wav"
#define RUTA_SFX_ITEM              "sounds/Item.wav"
#define RUTA_SFX_JUMP              "sounds/jump.wav"
#define RUTA_SFX_SLASH             "sounds/slash.wav"
#define RUTA_SFX_MECHANISM         "sounds/mechanismn.wav"
#define RUTA_SFX_DEATH             "sounds/onedeathn.wav"
#define RUTA_INTRO

#elif defined(_PSP2)
#define RUTA_GRA_INTRO             "ux0:data/AbbayeDesMorts/graphics/intro.png"
#define RUTA_GRA_INTRO2            "ux0:data/AbbayeDesMorts/graphics/intro2.png"
#define RUTA_GRA_TILES             "ux0:data/AbbayeDesMorts/graphics/tiles.png"
#define RUTA_GRA_TEMP              "ux0:data/AbbayeDesMorts/graphics/temp.png"
#define RUTA_GRA_PERGAMINO         "ux0:data/AbbayeDesMorts/graphics/pergamino.png"
#define RUTA_GRA_PERGAMINO_ROJO    "ux0:data/AbbayeDesMorts/graphics/pergaminorojo.png"
#define RUTA_GRA_PERGAMINO_AZUL    "ux0:data/AbbayeDesMorts/graphics/pergaminoazul.png"
#define RUTA_GRA_TITLE_MD          "ux0:data/AbbayeDesMorts/graphics/titlemd.png"
#define RUTA_GRA_ABBEY_MD          "ux0:data/AbbayeDesMorts/graphics/abbeymd.png"
#define RUTA_GRA_TILES_MD          "ux0:data/AbbayeDesMorts/graphics/tilesmd.png"
#define RUTA_GRA_FONDO01_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/01.png"
#define RUTA_GRA_FONDO02_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/02.png"
#define RUTA_GRA_FONDO03_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/03.png"
#define RUTA_GRA_FONDO05_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/05.png"
#define RUTA_GRA_FONDO06_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/06.png"
#define RUTA_GRA_FONDO07_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/07.png"
#define RUTA_GRA_FONDO08_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/08.png"
#define RUTA_GRA_FONDO09_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/09.png"
#define RUTA_GRA_FONDO10_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/10.png"
#define RUTA_GRA_FONDO11_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/11.png"
#define RUTA_GRA_FONDO12_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/12.png"
#define RUTA_GRA_FONDO13_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/13.png"
#define RUTA_GRA_FONDO14_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/14.png"
#define RUTA_GRA_FONDO15_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/15.png"
#define RUTA_GRA_FONDO16_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/16.png"
#define RUTA_GRA_FONDO17_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/17.png"
#define RUTA_GRA_FONDO18_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/18.png"
#define RUTA_GRA_FONDO19_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/19.png"
#define RUTA_GRA_FONDO20_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/20.png"
#define RUTA_GRA_FONDO21_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/21.png"
#define RUTA_GRA_FONDO22_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/22.png"
#define RUTA_GRA_FONDO23_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/23.png"
#define RUTA_GRA_FONDO24_MD        "ux0:data/AbbayeDesMorts/graphics/fondosmd/24.png"

#define RUTA_FON_VENICE_CLASSIC    "ux0:data/AbbayeDesMorts/fonts/VeniceClassic.ttf"

/* Ojo, las rutas de mapa y enemigos cambian */
#define RUTA_DAT_MAPA              "ux0:data/AbbayeDesMorts/mapa/mapa.txt"
#define RUTA_DAT_ENEMIGOS          "ux0:data/AbbayeDesMorts/mapa/enemigos.txt"

#define RUTA_MUS_TITLE             "ux0:data/AbbayeDesMorts/music/MainTitleN.wav"
#define RUTA_MUS_GAMEOVER          "ux0:data/AbbayeDesMorts/music/GameOverV2N.wav"
#define RUTA_MUS_PRAYER            "ux0:data/AbbayeDesMorts/music/PrayerofHopeN.wav"
#define RUTA_MUS_MANHUNT           "ux0:data/AbbayeDesMorts/music/ManhuntN.wav"
#define RUTA_MUS_CHURCH            "ux0:data/AbbayeDesMorts/music/AreaIChurchN.wav"
#define RUTA_MUS_WOOD              "ux0:data/AbbayeDesMorts/music/ManhuntwoodN.wav"
#define RUTA_MUS_HANGMAN           "ux0:data/AbbayeDesMorts/music/HangmansTree.wav"
#define RUTA_MUS_CAVES             "ux0:data/AbbayeDesMorts/music/AreaIICavesV2N.wav"
#define RUTA_MUS_EVIL_FIGHT        "ux0:data/AbbayeDesMorts/music/EvilFightN.wav"
#define RUTA_MUS_HELL              "ux0:data/AbbayeDesMorts/music/AreaIIIHellN.wav"

#define RUTA_SFX_SHOOT             "ux0:data/AbbayeDesMorts/sounds/shoot.wav"
#define RUTA_SFX_DOOR              "ux0:data/AbbayeDesMorts/sounds/doorfx.wav"
#define RUTA_SFX_ITEM              "ux0:data/AbbayeDesMorts/sounds/Item.wav"
#define RUTA_SFX_JUMP              "ux0:data/AbbayeDesMorts/sounds/jump.wav"
#define RUTA_SFX_SLASH             "ux0:data/AbbayeDesMorts/sounds/slash.wav"
#define RUTA_SFX_MECHANISM         "ux0:data/AbbayeDesMorts/sounds/mechanismn.wav"
#define RUTA_SFX_DEATH             "ux0:data/AbbayeDesMorts/sounds/onedeathn.wav"
#define RUTA_INTRO


#elif defined(_RUTAS_RELATIVAS)
#define RUTA_GRA_INTRO             "graphics/intro.png"
#define RUTA_GRA_INTRO2            "graphics/intro2.png"
#define RUTA_GRA_TILES             "graphics/tiles.png"
#define RUTA_GRA_TEMP              "graphics/temp.png"
#define RUTA_GRA_PERGAMINO         "graphics/pergamino.png"
#define RUTA_GRA_PERGAMINO_ROJO    "graphics/pergaminorojo.png"
#define RUTA_GRA_PERGAMINO_AZUL    "graphics/pergaminoazul.png"
#define RUTA_GRA_TITLE_MD          "graphics/titlemd.png"
#define RUTA_GRA_ABBEY_MD          "graphics/abbeymd.png"
#define RUTA_GRA_TILES_MD          "graphics/tilesmd.png"
#define RUTA_GRA_FONDO01_MD        "graphics/fondosmd/01.png"
#define RUTA_GRA_FONDO02_MD        "graphics/fondosmd/02.png"
#define RUTA_GRA_FONDO03_MD        "graphics/fondosmd/03.png"
#define RUTA_GRA_FONDO05_MD        "graphics/fondosmd/05.png"
#define RUTA_GRA_FONDO06_MD        "graphics/fondosmd/06.png"
#define RUTA_GRA_FONDO07_MD        "graphics/fondosmd/07.png"
#define RUTA_GRA_FONDO08_MD        "graphics/fondosmd/08.png"
#define RUTA_GRA_FONDO09_MD        "graphics/fondosmd/09.png"
#define RUTA_GRA_FONDO10_MD        "graphics/fondosmd/10.png"
#define RUTA_GRA_FONDO11_MD        "graphics/fondosmd/11.png"
#define RUTA_GRA_FONDO12_MD        "graphics/fondosmd/12.png"
#define RUTA_GRA_FONDO13_MD        "graphics/fondosmd/13.png"
#define RUTA_GRA_FONDO14_MD        "graphics/fondosmd/14.png"
#define RUTA_GRA_FONDO15_MD        "graphics/fondosmd/15.png"
#define RUTA_GRA_FONDO16_MD        "graphics/fondosmd/16.png"
#define RUTA_GRA_FONDO17_MD        "graphics/fondosmd/17.png"
#define RUTA_GRA_FONDO18_MD        "graphics/fondosmd/18.png"
#define RUTA_GRA_FONDO19_MD        "graphics/fondosmd/19.png"
#define RUTA_GRA_FONDO20_MD        "graphics/fondosmd/20.png"
#define RUTA_GRA_FONDO21_MD        "graphics/fondosmd/21.png"
#define RUTA_GRA_FONDO22_MD        "graphics/fondosmd/22.png"
#define RUTA_GRA_FONDO23_MD        "graphics/fondosmd/23.png"
#define RUTA_GRA_FONDO24_MD        "graphics/fondosmd/24.png"

#define RUTA_FON_VENICE_CLASSIC    "fonts/VeniceClassic.ttf"

/* Ojo, las rutas de mapa y enemigos cambian */
#define RUTA_DAT_MAPA              "mapa/mapa.txt"
#define RUTA_DAT_ENEMIGOS          "mapa/enemigos.txt"

#define RUTA_MUS_TITLE             "music/MainTitleN.wav"
#define RUTA_MUS_GAMEOVER          "music/GameOverV2N.wav"
#define RUTA_MUS_PRAYER            "music/PrayerofHopeN.wav"
#define RUTA_MUS_MANHUNT           "music/ManhuntN.wav"
#define RUTA_MUS_CHURCH            "music/AreaIChurchN.wav"
#define RUTA_MUS_WOOD              "music/ManhuntwoodN.wav"
#define RUTA_MUS_HANGMAN           "music/HangmansTree.wav"
#define RUTA_MUS_CAVES             "music/AreaIICavesV2N.wav"
#define RUTA_MUS_EVIL_FIGHT        "music/EvilFightN.wav"
#define RUTA_MUS_HELL              "music/AreaIIIHellN.wav"

#define RUTA_SFX_SHOOT             "sounds/shoot.wav"
#define RUTA_SFX_DOOR              "sounds/doorfx.wav"
#define RUTA_SFX_ITEM              "sounds/Item.wav"
#define RUTA_SFX_JUMP              "sounds/jump.wav"
#define RUTA_SFX_SLASH             "sounds/slash.wav"
#define RUTA_SFX_MECHANISM         "sounds/mechanismn.wav"
#define RUTA_SFX_DEATH             "sounds/onedeathn.wav"
#define RUTA_INTRO

#else /* Rutas absolutas */

#define RUTA_GRA_INTRO             "/usr/share/abbaye/graphics/intro.png"
#define RUTA_GRA_INTRO2            "/usr/share/abbaye/graphics/intro2.png"
#define RUTA_GRA_TILES             "/usr/share/abbaye/graphics/tiles.png"
#define RUTA_GRA_TEMP              "/usr/share/abbaye/graphics/temp.png"
#define RUTA_GRA_PERGAMINO         "/usr/share/abbaye/graphics/pergamino.png"
#define RUTA_GRA_PERGAMINO_ROJO    "/usr/share/abbaye/graphics/pergaminorojo.png"
#define RUTA_GRA_PERGAMINO_AZUL    "/usr/share/abbaye/graphics/pergaminoazul.png"
#define RUTA_GRA_TITLE_MD          "/usr/share/abbaye/graphics/titlemd.png"
#define RUTA_GRA_ABBEY_MD          "/usr/share/abbaye/graphics/abbeymd.png"
#define RUTA_GRA_TILES_MD          "/usr/share/abbaye/graphics/tilesmd.png"
#define RUTA_GRA_FONDO01_MD        "/usr/share/abbaye/graphics/fondosmd/01.png"
#define RUTA_GRA_FONDO02_MD        "/usr/share/abbaye/graphics/fondosmd/02.png"
#define RUTA_GRA_FONDO03_MD        "/usr/share/abbaye/graphics/fondosmd/03.png"
#define RUTA_GRA_FONDO05_MD        "/usr/share/abbaye/graphics/fondosmd/05.png"
#define RUTA_GRA_FONDO06_MD        "/usr/share/abbaye/graphics/fondosmd/06.png"
#define RUTA_GRA_FONDO07_MD        "/usr/share/abbaye/graphics/fondosmd/07.png"
#define RUTA_GRA_FONDO08_MD        "/usr/share/abbaye/graphics/fondosmd/08.png"
#define RUTA_GRA_FONDO09_MD        "/usr/share/abbaye/graphics/fondosmd/09.png"
#define RUTA_GRA_FONDO10_MD        "/usr/share/abbaye/graphics/fondosmd/10.png"
#define RUTA_GRA_FONDO11_MD        "/usr/share/abbaye/graphics/fondosmd/11.png"
#define RUTA_GRA_FONDO12_MD        "/usr/share/abbaye/graphics/fondosmd/12.png"
#define RUTA_GRA_FONDO13_MD        "/usr/share/abbaye/graphics/fondosmd/13.png"
#define RUTA_GRA_FONDO14_MD        "/usr/share/abbaye/graphics/fondosmd/14.png"
#define RUTA_GRA_FONDO15_MD        "/usr/share/abbaye/graphics/fondosmd/15.png"
#define RUTA_GRA_FONDO16_MD        "/usr/share/abbaye/graphics/fondosmd/16.png"
#define RUTA_GRA_FONDO17_MD        "/usr/share/abbaye/graphics/fondosmd/17.png"
#define RUTA_GRA_FONDO18_MD        "/usr/share/abbaye/graphics/fondosmd/18.png"
#define RUTA_GRA_FONDO19_MD        "/usr/share/abbaye/graphics/fondosmd/19.png"
#define RUTA_GRA_FONDO20_MD        "/usr/share/abbaye/graphics/fondosmd/20.png"
#define RUTA_GRA_FONDO21_MD        "/usr/share/abbaye/graphics/fondosmd/21.png"
#define RUTA_GRA_FONDO22_MD        "/usr/share/abbaye/graphics/fondosmd/22.png"
#define RUTA_GRA_FONDO23_MD        "/usr/share/abbaye/graphics/fondosmd/23.png"
#define RUTA_GRA_FONDO24_MD        "/usr/share/abbaye/graphics/fondosmd/24.png"

#define RUTA_FON_VENICE_CLASSIC    "/usr/share/abbaye/fonts/VeniceClassic.ttf"

#define RUTA_DAT_MAPA              "/usr/share/abbaye/data/mapa.txt"
#define RUTA_DAT_ENEMIGOS          "/usr/share/abbaye/data/enemigos.txt"

#define RUTA_MUS_TITLE             "/usr/share/abbaye/music/MainTitleN.wav"
#define RUTA_MUS_GAMEOVER          "/usr/share/abbaye/music/GameOverV2N.wav"
#define RUTA_MUS_PRAYER            "/usr/share/abbaye/music/PrayerofHopeN.wav"
#define RUTA_MUS_MANHUNT           "/usr/share/abbaye/music/ManhuntN.wav"
#define RUTA_MUS_CHURCH            "/usr/share/abbaye/music/AreaIChurchN.wav"
#define RUTA_MUS_WOOD              "/usr/share/abbaye/music/ManhuntwoodN.wav"
#define RUTA_MUS_HANGMAN           "/usr/share/abbaye/music/HangmansTree.wav"
#define RUTA_MUS_CAVES             "/usr/share/abbaye/music/AreaIICavesV2N.wav"
#define RUTA_MUS_EVIL_FIGHT        "/usr/share/abbaye/music/EvilFightN.wav"
#define RUTA_MUS_HELL              "/usr/share/abbaye/music/AreaIIIHellN.wav"

#define RUTA_SFX_SHOOT             "/usr/share/abbaye/sounds/shoot.wav"
#define RUTA_SFX_DOOR              "/usr/share/abbaye/sounds/doorfx.wav"
#define RUTA_SFX_ITEM              "/usr/share/abbaye/sounds/Item.wav"
#define RUTA_SFX_JUMP              "/usr/share/abbaye/sounds/jump.wav"
#define RUTA_SFX_SLASH             "/usr/share/abbaye/sounds/slash.wav"
#define RUTA_SFX_MECHANISM         "/usr/share/abbaye/sounds/mechanismn.wav"
#define RUTA_SFX_DEATH             "/usr/share/abbaye/sounds/onedeathn.wav"
#endif

#ifdef _OPENPANDORA
  #undef RUTA_GRA_INTRO
  #define RUTA_GRA_INTRO           "graphics/intro-pandora.png"
  #define KEY_JUMP                 SDLK_PAGEDOWN
  #define KEY_START                SDLK_PAGEDOWN
  #define KEY_GRAPHICS             SDLK_c
  #define KEY_INFO                 SDLK_i

#elif defined(_GCW_ZERO)
  #undef RUTA_GRA_INTRO
  #define RUTA_GRA_INTRO           "graphics/intro-gcw.png"
  #define KEY_JUMP                 SDLK_LCTRL
  #define KEY_START                SDLK_RETURN
  #define KEY_GRAPHICS             SDLK_LALT
  #define KEY_INFO                 SDLK_SPACE

#elif defined(_3DS)
  #undef RUTA_GRA_INTRO
  #define RUTA_GRA_INTRO           "romfs:/graphics/intro-gcw.png"
  #define KEY_JUMP                 SDLK_UP
  #define KEY__START               SDLK_RETURN
  #define KEY_ACTION               SDLK_a
  #define KEY_GRAPHICS             SDLK_b
  #define KEY_INFO                 SDLK_x

#elif defined(_PSP2)  
  #undef RUTA_GRA_INTRO
  #define RUTA_GRA_INTRO           "ux0:data/AbbayeDesMorts/graphics/intro-gcw.png"
  #define KEY_JUMP                 SDLK_UP
  #define KEY_START                SDLK_RETURN
  #define KEY_ACTION               SDLK_a
  #define KEY_GRAPHICS             SDLK_b
  #define KEY_INFO                 SDLK_x
  
#else
  #define KEY_JUMP                 SDLK_UP
  #define KEY_START                SDLK_SPACE
  #define KEY_GRAPHICS             SDLK_c
  #define KEY_INFO                 SDLK_i
#endif

#endif /* _COMUN_H_ */

