/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:39:01 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/19 19:27:54 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_for_malloc(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*charr;
	int		len;
	long	nb;

	len = count_for_malloc(n);
	nb = n;
	charr = malloc(sizeof(char) * (len + 1));
	if (!charr)
		return(NULL);
	charr[len--] = '\0';
	if (n == 0)
		charr[0] = '0';
	else if (nb < 0)
	{
		charr[0] = '-';
		nb = nb * -1;
	}
	while (nb)
	{
		charr[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (charr);
}

// int main()
// {
// 	printf("%s", ft_itoa(-0));
// 	printf("%d", count_for_malloc(-152));
// }