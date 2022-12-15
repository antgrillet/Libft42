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
char *ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strmapi(char const *s,char (*f)(unsigned int, char));
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s,void (*f)(unsigned int, char*));
char    *strdup(const char *s);
char *strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
void    ft_memset(void *pointer, int value, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, void *src, int n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s1, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);
int	ft_isprint(char c);
int	ft_isdigit(char c);
int	ft_isascii(char c);
int	ft_isalpha(char c);
int	ft_isalnum(char c);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, int n);
int	ft_atoi(const char *nptr);


#endif