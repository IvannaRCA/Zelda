#pragma once
#include "SDL.h"

// WINDOW
#define LOGICAL_WIDTH	256
#define LOGICAL_HEIGHT	224
#define SCREEN_WIDTH	LOGICAL_WIDTH*3
#define SCREEN_HEIGHT	LOGICAL_HEIGHT*3
#define FPS				60

// WINDOW LIMITS FOR ENEMIES
#define UP_LIMIT		64
#define DOWN_LIMIT		192
#define RIGHT_LIMIT		224
#define LEFT_LIMIT		32

// TILES
#define tileSP			1
#define tileW			16
#define tileH			16
#define mapW			144
#define mapH			55

// KEYS
#define KEY_ESCAPE		SDL_SCANCODE_ESCAPE
#define KEY_RETURN		SDL_SCANCODE_RETURN
#define KEY_UP			SDL_SCANCODE_UP
#define KEY_RIGHT		SDL_SCANCODE_RIGHT
#define KEY_LEFT		SDL_SCANCODE_LEFT
#define KEY_DOWN		SDL_SCANCODE_DOWN
#define KEY_Z			SDL_SCANCODE_Z