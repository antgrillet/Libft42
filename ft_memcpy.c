/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:52:14 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 12:52:14 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, int n)
{
	int				i;
	unsigned char	*dstt;
	unsigned char	*srcc;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	while (i != n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}
