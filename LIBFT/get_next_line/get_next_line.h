/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 14:55:45 by mavagner          #+#    #+#             */
/*   Updated: 2017/07/30 14:55:47 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft.h"

typedef struct		s_line
{
	char			*remain;
	struct s_line	*next;
	int				fd;
}					t_line;

char				*read_line(int fd);
int					check_fd(int fd, t_line *begin_list);
t_line				*create_elem(int fd);
void				elem_add(int fd, t_line **begin_list);

#endif
