#include "libft.h"

int		ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != 0)
		;
	return (i);
}

int		ft_strlen_wspace(char *str)
{
	int		i;
	int		counter;

	i = -1;
	counter = 0;
	while (str[++i] != 0)
		if (str[i] != 32)
			counter++;
	return (counter);
}
