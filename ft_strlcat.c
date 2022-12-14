#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_src = 0;
	len_dest = ft_strlen(dst);
	if (len_dest >= dstsize)
	{
		while (len_dest + len_src < dstsize)
		{
			dst[(len_dest + len_src)] = src[len_src];
			len_src++;
		}
		dst[(len_dest + len_src)] = '\0';
		return (0);
	}
	else if (dstsize == 0)
		return(1);
	return(1);
}
