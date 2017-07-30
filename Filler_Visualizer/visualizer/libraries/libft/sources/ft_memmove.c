#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (dst > src)
	{
		str1 = str1 + len;
		str2 = str2 + len;
		while (len--)
			*--str1 = *--str2;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
