#include "libft.h"

size_t 	ft_strlen(char *c)
{
	size_t a;

	a = 0;
	while (c[a] != '\0')
	{
		a += 1;
	}
	return (a);
}