/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:08:29 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 15:08:29 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ce;

	i = 0;
	ce = (unsigned char *)b;
	while (i != len)
	{
		ce[i] = c;
		i++;
	}
	b = (void *)ce;
	return (b);
}
