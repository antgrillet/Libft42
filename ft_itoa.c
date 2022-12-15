/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:39:01 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/15 10:34:07 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_for_malloc(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i = i + 1;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*charr;
	int		j;
	int		y;
	size_t	i;

	i = 0;
	y = count_for_malloc(n);
	j = 0;
	charr = (char*)malloc(sizeof(char) * (count_for_malloc(n) + 1));
	if (n < 0)
	{
		charr[0] = '-';
	}
	while (n < 10)
	{
		charr[y] = (n % 10) + '0';
		n = n / 10;
		y--;
	}
	charr[y] = n;
	charr[(count_for_malloc(n) + 1)] = '\0';
	return (charr);
}
