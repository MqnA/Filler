#include "libft.h"

int		ft_nbrlen(intmax_t nb)
{
	int		i;

	i = 1;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 9)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int		ft_nbrlonglen(long long nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}
