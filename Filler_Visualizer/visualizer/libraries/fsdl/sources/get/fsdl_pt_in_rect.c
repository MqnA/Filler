#include "fsdl.h"

int		fsdl_pt_in_rect(SDL_Point *point, SDL_Rect rect)
{
	if (point->x > (rect.x + rect.w) || point->y > (rect.y + rect.h) ||
		point->x < rect.x || point->y < rect.y)
		return (0);
	return (1);
}
