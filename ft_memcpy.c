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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char	*dstt;
	unsigned char	*srcc;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if(dstt == 0 && srcc == 0)
		return(0);
	while (i != n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}
