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
				count++;
			ii++;
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
		while(set[ii])
		{
			if(s1[i] == set[ii])
				trigger = 1;
			ii++;
		}
		ii = 0;
		if(trigger != 1)
		{	
			s2[iii] = s1[i];
			iii++;
		}
		i++;
		trigger = -1;
	}
	s2[iii] = '\0';
	return(s2);	
}

int	main(void)
{
	char	s1[]= "bonjour, a tous;comment allez vous;";
	char	set[]=";,.";

	printf("%s", ft_strtrim(s1,set));
}