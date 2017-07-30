#include "libft.h"

char	*ft_strchr(char *str, char c)
{
	int i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}
