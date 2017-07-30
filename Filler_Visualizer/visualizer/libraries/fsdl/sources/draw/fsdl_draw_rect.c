#include "fsdl.h"

void	fsdl_draw_rect(SDL_Surface *dst, SDL_Rect rect, size_t clr)
{
	int		y;

	y = rect.y;
	rect.w = rect.x + rect.w;
	rect.h = rect.y + rect.h;
	while (y < rect.h)
	{
		*((unsigned *)(dst->pixels + y * dst->pitch + rect.x *
		dst->format->BytesPerPixel)) = clr;
		*((unsigned *)(dst->pixels + y * dst->pitch + (rect.w - 1) *
		dst->format->BytesPerPixel)) = clr;
		++y;
	}
	while (++rect.x < rect.w)
	{
		*((unsigned *)(dst->pixels + rect.y * dst->pitch + rect.x *
		dst->format->BytesPerPixel)) = clr;
		*((unsigned *)(dst->pixels + (rect.h - 1) * dst->pitch + rect.x *
		dst->format->BytesPerPixel)) = clr;
	}
}
