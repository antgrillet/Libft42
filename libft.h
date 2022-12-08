#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;


size_t ft_strlen(char *c)

#endif