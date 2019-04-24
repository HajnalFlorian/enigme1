#ifndef PROTO_TYPESTRUCT_H_INCLUDED
#define PROTO_TYPESTRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>

typedef struct game{


     SDL_Window *g_pWindow;
     SDL_Renderer *g_pRenderer;
     SDL_Texture *g_texture;
     SDL_Surface *g_surface;


}game;

typedef struct gameState{

    int g_bRunning;


}gameState;

typedef struct font{

    TTF_Font *g_font;

}font;


typedef struct coordonnees{

    double x;
    double y;



}coordonnees;

const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 700;

int init(char *title, int xpos,int ypos,int height, int width,int flags,game *myGame,font *mFont);
void handleEvents(gameState *state);
void cutBitmapTexture(game *myGame,gameState state);
void writeSDL(game *myGame,font mFont);
int Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize);
void destroyTexture(game *myGame);
void destroyFont(font *mFont);
void destroy(game *myGame);

#endif // PROTO_TYPESTRUCT_H_INCLUDED
