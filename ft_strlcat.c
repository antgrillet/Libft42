#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	while ((i + len_dest) < dstsize && src[i])
		{
			dst[i + len_dest] = src[i];
			i++;
		}
	dst[(i + len_dest)] = '\0';
	return (len_dest + i);
}
