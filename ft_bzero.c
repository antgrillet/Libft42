#include "libft.h"
void	ft_bzero(void *s, int n)
{
	unsigned int i;

	i = 0;

	while ( i != n)
	{
		s[i] = 0;
	}
}

