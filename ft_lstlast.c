#include "libft.h"

t_list	ft_lstlast(t_list *lst)
{
	t_list	*count;

	count = lst;
	while((count -> next) != NULL)
	{
		count = count -> next;
	}
	return (count);
}