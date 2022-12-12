#include "libft.h"

size_t	count_letter(char const *s1, char const *set)
{
	size_t	i;
	size_t	ii;
	size_t	count;

	i = 0;
	ii = 0;
	count = 0;
	while (s1[i])
	{
		ii = 0;
		while(set[ii])
		{
			if (set[ii] == set[i])
			{
				count++;
				ii+;
			}
		} 
		i++;
	}
	return((i - count));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	ii;
	size_t	iii;
	int		trigger;
	char	*s2;

	if(!(s2 = malloc(sizeof(char) * (count_letter(s1,set) + 1))))
		return (NULL);
	i = 0;
	ii = 0;
	trigger = -1;
	iii = 0;
	while (s1[i])
	{
		while (set[ii])
		{
			if(s1[i] == set[ii])
				trigger = 1;
			ii+;
		}
		ii = 0;
		if(trigger != 1)
		
			
	}
	

	
}