#ifndef FILLER_FILLER_H
# define FILLER_FILLER_H

# include "../LIBFT/libft.h"

typedef enum		e_way
{
	UP_LEFT,
	UP_RIGHT,
	DOWN_LEFT,
	DOWN_RIGHT
}					t_way;

typedef struct		s_coords
{
	int				x;
	int				y;
}					t_coords;

typedef struct		s_holder
{
	int				line_num;
	int				column_num;
	t_way			direction;
	char			my_sign;
	int				high_map;
	int				width_map;
	char			**map;
	int				high_shape;
	int				width_shape;
	char			**shape;
}					t_holder;

int					find_sign(t_holder *hold, t_coords *co_m);
void				take_direction(t_holder *hold);
void				update_map(t_holder *hold);
void				update_shape(t_holder *hold);
void				initializer(t_holder *hold, t_coords *c_m, t_coords *c_sh);
int					can_fill_map(t_holder *hold, t_coords *coord_m,
					t_coords *coord_sh);
int					playing(t_holder *hold, t_coords *coord_m,
					t_coords *coord_sh);
int					build_wall(t_holder *hold, t_coords *coord_m,
					t_coords *coord_sh, int m);
void				free_shape(t_holder *hold);

#endif
