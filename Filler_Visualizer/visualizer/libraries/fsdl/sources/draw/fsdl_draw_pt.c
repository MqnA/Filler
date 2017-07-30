#include "fsdl.h"

void	fsdl_draw_pt(SDL_Surface *dst, size_t clr, int x, int y)
{
	*((unsigned *)(dst->pixels + y * dst->pitch + x *
	dst->format->BytesPerPixel)) = clr;
}
