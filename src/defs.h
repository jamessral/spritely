#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef _GLOBAL_CONSTANTS
#define _GLOBAL_CONSTANTS

#define SPRITE_PIXEL_SIZE 1
#define SPRITE_WIDTH 8
#define SPRITE_HEIGHT 8

#define SCREEN_WIDTH 670
#define SCREEN_HEIGHT 625

#define SPRITE_CANVAS_SIZE 64
#define SPRITE_CANVAS_PIXEL_SIZE 50
#define SPRITE_CANVAS_ROW_SIZE 8

#define COLORPICKER_PIXEL_SIZE 50
#define COLORPICKER_CANVAS_SIZE 16
#define COLORPICKER_XOFFSET 440
#define COLORPICKER_YOFFSET 40
#define COLORPICKER_ROW_SIZE 4
#define COLORPICKER_NUM_COLORS 16

// 4 because RGBA
#define NUM_COLOR_COMPONENTS 4
#define COLOR_VALUES_SIZE COLORPICKER_NUM_COLORS * NUM_COLOR_COMPONENTS

#define SPRITESHEET_SIZE 64
#define SPRITESHEET_CANVAS_SIZE 64
#define SPRITESHEET_CELL_SIZE 42
#define SPRITESHEET_PIXEL_SIZE 5
#define SPRITESHEET_ROW_SIZE 16
#define SPRITESHEET_COL_SIZE 4
#define SPRITESHEET_YOFFSET 460

#define TOOLBAR_ROW_SIZE 8
#define TOOLBAR_COLUMN_SIZE 1
#define TOOLBAR_XOFFSET 0
#define TOOLBAR_YOFFSET 405

#endif
