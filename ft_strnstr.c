#include "libft.h"
char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t n;

	n = 0;
	i = 0;
	if(ft_strlen(little) == 0)
		return(big);
	while (big[i])
	{
		if (big[i] == little[n])
		{
			while (big[i] == little[n])
			{
				i++;
				n++;
				if (n == len)
				{
					return(big[(i - len)]);
				}
				
			}
		}
		i++;
		return(NULL);
	}
	
}