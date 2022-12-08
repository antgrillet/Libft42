#include <libft.h>

size_t	count_string(const char *str, char c)
{
	size_t	i;
	
	i = 0;
	while (*str)
	{
		while (*str != c)
		{
			str++;
			i++;
		}
		str++;
	}
	
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	y;
	char **tab;

	i = 0;
	if (!s || !c)
		return (NULL);
	if(!(tab = malloc(sizeof (char *) * count_string(s,c) + 1)))
		return (NULL);
	while (s[i])
	{
		y = 0;
		while (s[i] != c)
		{
			tab[j][y] = s[i];
			i++;
			y++;
		}
		j++;
		i++;
	}
	
	
	
}