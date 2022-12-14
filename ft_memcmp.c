/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:50:57 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 12:50:57 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	*v1;
	size_t	*v2;
	size_t	i;

	v1 = (size_t *)s1;
	v2 = (size_t *)s2;
	i = 0;
	while (i <= n)
	{
		if (v1[i] > v2[i])
			return (1);
		if (v1[i] < v2[i])
			return (-1);
		i++;
	}
	return (0);
}
