/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:52:35 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 12:52:35 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*srcc;
	size_t	i;

	dest = (char *)dst;
	srcc = (char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dest > srcc)
	{
		while (len-- != 0)
			dest[len] = srcc[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}
