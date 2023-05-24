#pragma once
#include <stdint.h>

typedef struct
{
    uint32_t width;
    uint32_t height;
    const char logo[];
} retro_logo_image;

void odroid_overlay_draw_logo(uint16_t x_pos, uint16_t y_pos, const retro_logo_image *logo, uint16_t color);

extern const retro_logo_image logo_rgo;
extern const retro_logo_image logo_flash;
extern const retro_logo_image logo_rgw;
extern const retro_logo_image logo_gnw;

extern const retro_logo_image header_sg1000;
extern const retro_logo_image header_col;
extern const retro_logo_image header_gb;
extern const retro_logo_image header_gg;
extern const retro_logo_image header_nes;
extern const retro_logo_image header_pce;
extern const retro_logo_image header_sms;
extern const retro_logo_image header_gw;
extern const retro_logo_image header_msx;
extern const retro_logo_image header_wsv;
extern const retro_logo_image header_gen;
extern const retro_logo_image header_a7800;
extern const retro_logo_image header_amstrad;

extern const retro_logo_image pad_sg1000;
extern const retro_logo_image pad_col;
extern const retro_logo_image pad_gb;
extern const retro_logo_image pad_gg;
extern const retro_logo_image pad_nes;
extern const retro_logo_image pad_pce;
extern const retro_logo_image pad_sms;
extern const retro_logo_image pad_gw;
extern const retro_logo_image pad_msx;
extern const retro_logo_image pad_wsv;
extern const retro_logo_image pad_gen;
extern const retro_logo_image pad_a7800;
extern const retro_logo_image pad_amstrad;

extern const retro_logo_image logo_coleco;
extern const retro_logo_image logo_nintendo;
extern const retro_logo_image logo_sega;
extern const retro_logo_image logo_pce;
extern const retro_logo_image logo_microsoft;
extern const retro_logo_image logo_watara;
extern const retro_logo_image logo_atari;
extern const retro_logo_image logo_amstrad;


extern const unsigned char IMG_SPEAKER[];
extern const unsigned char IMG_SUN[];
extern const unsigned char IMG_FOLDER[];
extern const unsigned char IMG_DISKETTE[];
extern const unsigned char IMG_0_5X[];
extern const unsigned char IMG_0_75X[]; 
extern const unsigned char IMG_1X[];
extern const unsigned char IMG_1_25X[];
extern const unsigned char IMG_1_5X[];
extern const unsigned char IMG_2X[];
extern const unsigned char IMG_3X[];
extern const unsigned char IMG_SC[];
extern const unsigned char IMG_BUTTON_A[];
extern const unsigned char IMG_BUTTON_A_P[];
extern const unsigned char IMG_BUTTON_B[];
extern const unsigned char IMG_BUTTON_B_P[];

extern const unsigned char img_clock_00[];
extern const unsigned char img_clock_01[];
extern const unsigned char img_clock_02[];
extern const unsigned char img_clock_03[];
extern const unsigned char img_clock_04[];
extern const unsigned char img_clock_05[];
extern const unsigned char img_clock_06[];
extern const unsigned char img_clock_07[];
extern const unsigned char img_clock_08[];
extern const unsigned char img_clock_09[];


