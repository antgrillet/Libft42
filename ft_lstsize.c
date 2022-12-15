#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*lstt;

	count = 0;
	lstt = lst
	while(lstt)
	{
		lstt = lstt -> next
		count++;
	}
	return(count)
}
