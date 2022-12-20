/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:15:39 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/19 14:42:39 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	value_nptr;

	i = 0;
	value_nptr = 0;
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			while (nptr[i] >= '0' && nptr[i] <= '9')
			{
				value_nptr = value_nptr * 10;
				value_nptr = value_nptr + ((nptr[i]) - 48);
				i++;
			}
		}
		i++;
	}
	return (value_nptr);
}
