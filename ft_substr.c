#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t start_int;
	size_t i;
	char *s2;
	
	i = 0;
	start_int = (size_t)start;
	 if(!(s2 = (char *)(malloc(sizeof(char *) * (len + 1)) == NULL)))
		return(NULL);
	while (i != len && s[(start_int + i)])
	{
		s2[i] = s[(start_int + i)];
		i++;
	}
	return(s2);
}