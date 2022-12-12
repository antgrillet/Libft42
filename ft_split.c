#include "libft.h"

size_t	count_word(const char *str, char c)
{
	size_t	i;
	size_t	ii;
	size_t	iii;
	
	i = 0;
	ii = 0;
	iii = 0;
	while (str[ii])
	{
		if(str[ii] != c && i != 1)
		{
			iii++;
			i++;
		}
		else if (str[ii] == c)
		{
			i = 0;
		}
		ii++;
	}
	return(i);
}
char	*copy_word(char const *s, size_t i, int j)
{
	size_t	jj;
	char	*copied_word;

	jj = 0;
	copied_word = malloc(sizeof(char) * (i - j + 1));
	while (j != i)
	{
		copied_word[jj] = s[j];
		j++;
		jj++; 
	}
	copied_word[jj] = '\0';
	return(copied_word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	size_t	y;
	char **tab;

	i = 0;
	j = -1;
	y = 0;
	if (!s || !c || !(tab = malloc(sizeof(char **) * count_word(s,c) + 1)))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && j < 0)
		{
			j = i;
		}
		if(s[i] == c)
		{
			tab[y] = copy_word(s,i,j);
			y++;
			j = -1;
		}
		i++;
	}
	return(tab);
}

int	main(void)
{
	size_t	i = 0;
	char	**tab;
	const char	exemple[] = "bonjour , je , ,, m'apelle anto.";

	tab = malloc(sizeof(char *) * 25);
	tab = ft_split(exemple, ',');
	while(tab[i])
	{
		printf("%s" , tab[i]);
		i++;
	}
}