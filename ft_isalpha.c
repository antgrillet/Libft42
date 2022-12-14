/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:27:23 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 12:27:23 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if (c > 64 && c < 91)
		return (1);
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int		a;
	char	c;

	c = 'J';
	a = ft_isalpha(c);
	printf(%d , a);
}
*/