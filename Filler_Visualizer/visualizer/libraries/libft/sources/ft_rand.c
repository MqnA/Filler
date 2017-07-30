#include "libft.h"

int		ft_rand(int min, int max)
{
	int i;
	int cpy;
	int num;
	int	res;

	i = 0;
	res = 0;
	num = (long)malloc(sizeof(long));
	if (num < 0)
		num = -num;
	cpy = num;
	while (num >= 10)
	{
		res += (num % 10);
		num = num / 10;
		i++;
	}
	res = res * 17 + cpy + i;
	res = min + (res % ((max + 1) - min));
	return (res);
}
