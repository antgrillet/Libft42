#include "libft.h"
char    *ft_strmapi(char const *s,char (*f)(unsigned int, char))
{
    char    *s2;
    size_t  i;

    i = 0;
    s2 = ft_strdup(s);
    if(!s2 || !s || !i)
        return(NULL);
    while (str[i])
    {
        s2[i] = (i, s2[i]);
        i++;
    }
    return(s2);
}