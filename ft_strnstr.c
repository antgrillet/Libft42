#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t n;

	n = 0;
	i = 0;
	if(ft_strlen((char *)little) == 0)
		return((char*)big);
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
					return(&((char *)big)[(i - len)]);
				}
				
			}
		}
		i++;
	}
	return(NULL);
}