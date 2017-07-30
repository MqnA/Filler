#include "libft.h"

short	ft_intlen(int num)
{
	int	i;

	i = 0;
	while (num % 10 && ++i)
		num /= 10;
	return (i);
}
