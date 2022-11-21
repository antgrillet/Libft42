#include "libft.h"

char *strchr(const char *s, int c)
{
	int i;
	char *str

	i = 0;
	str = (char *)s
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}

