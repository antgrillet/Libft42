#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	if (!len && !haystack)
		return (0);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		n = 0;
		while (haystack[i + n] == needle[n] && i + n < len)
		{
			if(needle[n + 1] == '\0')
				return(&((char *)haystack)[(i)]);
			n++;
		}
		i++;
	}
	return(NULL);
}
/*
int	main(void)
{
char haystack[30] = "aaabcabcd";
char needle[10] = "aabc";
printf("%s", ft_strnstr("", "", -1));
}
*/