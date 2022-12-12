#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list		lenouvelelements;

	lenouvelelements = malloc(sizeof (t_list) * 1 + 1)

	lenouvelelements -> content = content;
	lenouvelelements -> next = NULL;

	return (new);


}