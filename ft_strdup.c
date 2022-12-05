#include "libft.h"

char    *strdup(const char *s)
{
	size_t	i;
	char	*duplication;

	i = 0;
	duplication = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (duplication == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < ft_strlen(s))
		{
			duplication[i] = s[i];
			i++;
		}
		duplication[i] = '\0';  
	}
	return (duplication);
}