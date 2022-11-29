#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
    size_t	i;
    void *tableau;

    i = 0;
	tableau = malloc(sizeof(size) * nmemb);
    return(tableau);
}