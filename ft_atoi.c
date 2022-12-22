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

int	space_for_atoi(const char *str, int i)
{
	while (str[i] == '\t' || (str[i] == '\n') || (str[i] == '\v') || \
			(str[i] == '\f') || (str[i] == '\r') || str[i] == ' ')
	{
		i = i + 1;
	}
	return (i);
}

int	putnbr_int(int str_int, const char *str, int i)
{
	while (str[i] <= 57 && str[i] >= 48)
	{
		str_int = str_int * 10;
		str_int += (str[i] - 48);
		i = i + 1;
	}
	return (str_int);
}

int	positive_or_negative_(int count_negative, int count_positif, int str_int)
{
	if ((count_negative + count_positif) > 1)
		return (0);
	if ((count_negative % 2) == 1)
		str_int = str_int * -1;
	else
		str_int = str_int * 1;
	return (str_int);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	count_negative;
	int	str_int;
	int	count_positif;
	int	y;

	str_int = 0;
	i = 0;
	count_negative = 0;
	count_positif = 0;
	i = space_for_atoi(nptr, i);
	while (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			count_negative++;
		if (nptr[i] == 43)
			count_positif++;
		i++;
	}
	y = putnbr_int(str_int, nptr, i);
	return (positive_or_negative_(count_negative, count_positif, y));
}
