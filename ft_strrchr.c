#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	char *str;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}

