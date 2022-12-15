#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;


size_t	ft_strlen(char *c);
char	*ft_strdup(const char *s);
int	ft_atoi(const char *nptr);
void    ft_memset(void *pointer, int value, size_t len);
int	ft_toupper(int c);
int ft_tolower(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char *ft_  strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n)







#endif