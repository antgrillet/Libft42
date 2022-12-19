#include "libft.h"
char    *ft_strmapi(char const *s,char (*f)(unsigned int, char))
{
    char    *s2;
    size_t  i;

    i = 0;
    s2 = malloc(sizeof(char) * ft_strlen(s) + 1);
    if(!s2 || !s)
        return(NULL);
    while (s[i])
    {
        s2[i] = f(i, s[i]);
        i++;
    }
    s2[i] = '\0';
    return(s2);
}