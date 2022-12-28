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

static int	space_for_atoi(const char *str, int i)
{
	while (str[i] == '\t' || (str[i] == '\n') || (str[i] == '\v') || \
			(str[i] == '\f') || (str[i] == '\r') || str[i] == ' ')
	{
		i = i + 1;
	}
	return (i);
}

static int	putnbr_int(int s_int, const char *str, int i)
{
	while (str[i] <= 57 && str[i] >= 48)
	{
		s_int = s_int * 10;
		s_int += (str[i] - 48);
		i = i + 1;
	}
	return (s_int);
}

static int	positive_or_negative_(int count_negative, int c_positif, int s_int)
{
	if ((count_negative + c_positif) > 1)
		return (0);
	if ((count_negative % 2) == 1)
		s_int = s_int * -1;
	else
		s_int = s_int * 1;
	return (s_int);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	count_negative;
	int	c_positif;
	int	y;

	i = 0;
	count_negative = 0;
	c_positif = 0;
	i = space_for_atoi(str, i);
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			count_negative++;
		if (str[i] == 43)
			c_positif++;
		i++;
	}
	y = putnbr_int(0, str, i);
	return (positive_or_negative_(count_negative, c_positif, y));
}
