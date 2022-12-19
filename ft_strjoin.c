
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	if(!s1 ||!s2)
		return (NULL);
	if(!(s3 = malloc(sizeof(char) * (ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1))))
		return(NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[(i + j)] = s2[j];
		j++;
	}
	return(s3[i + j] = '\0', s3);
}