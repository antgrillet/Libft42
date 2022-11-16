#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;
	size_t len_src;

	i = 0;
	len_src = 0;
	len = ft_strlen(dst);
	if (dst <= dstsize)
	{
		while ((len + len_src < dstsize)
		{
			dst[(len + len_src)] = src[len_src];
			len_src++;
		}
		dst[(len + len_src)] = "/0";
		return (0);
	}
	else if (dstsize == 0)
		return();
}
