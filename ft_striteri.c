#include "libft.h"

char	*ft_striteri(char *s,(*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if(!s)
		return(NULL);
	while (s[i])
	{
		(*f)(i, (s + i))
		i++;
	}
}