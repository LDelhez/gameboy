#ifndef SDL_H
#define SDL_H
int sdl_update(void);
void sdl_init(void);
void sdl_quit(void);
unsigned int *sdl_get_framebuffer(void);
#endif