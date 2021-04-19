#include "../lib/type.h"
#define VIDEO_MEMORY_OFFSET (uint*) 0xb8000
#define WHITE_ON_BLACK 0x0f
#define DISPLAY_WIDTH 80
#define DISPLAY_HEIGHT 25

// code
#define INIT_VIDEO char* video_memory = (char*) VIDEO_MEMORY_OFFSET;

// PORTs
#define REG_DISPLAY_CTRL 0x3d4
#define REG_DISPLAY_DATA 0x3d5

// kernel API
void kprints(char* text);
void kprintc(char character);
void kclear_display();
void knewline();
void copyrow(uint dest, uint src);
void kscroll();
