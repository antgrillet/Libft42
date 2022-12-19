#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t 	i;
	char	*s2;
	
	i = 0;
	if(start > ft_strlen(s))
		return(ft_strdup(""));
	else if (len > ft_strlen(s + start))
		s2 = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	else
		s2 = malloc(sizeof(char) * (len + 1));
	if(!s2)
		return(NULL);
	while (i < len && s[start])
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return(s2);
}