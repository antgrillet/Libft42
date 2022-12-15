#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	char *str;

	str = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return(&str[i]);
		i--;
	}
	if(str[0] == (char)c)
		return(&str[0]);
	return (NULL);
}