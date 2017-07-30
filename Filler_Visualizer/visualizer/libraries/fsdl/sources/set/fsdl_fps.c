#include "fsdl.h"

static void		fsdl_fps_limit_delay(t_timer *fps, const unsigned framelimit)
{
	unsigned	ticks;
	int			max;

	ticks = SDL_GetTicks();
	max = (1000 / fps->limit);
	if (framelimit < ticks)
		return ;
	if (framelimit > ticks + max)
		SDL_Delay(max);
	else
		SDL_Delay(framelimit - ticks);
}

void			fsdl_fps_limit(t_timer *fps)
{
	fsdl_fps_limit_delay(fps, fps->framelimit);
	fps->framelimit = SDL_GetTicks() + (1000 / fps->limit);
}

void			fsdl_fps_counter(t_timer *fps)
{
	if ((fps->update = SDL_GetTicks()) - fps->current >= 1000)
	{
		fps->current = fps->update;
		fps->fps = 0;
	}
	++(fps->fps);
}
