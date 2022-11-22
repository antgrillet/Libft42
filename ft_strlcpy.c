#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while ((i + 1) != dstsize)
	{
		dst[i] = src [i];
		i++;
	}
	return (i);
}


