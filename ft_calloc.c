/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:20:35 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/19 16:49:38 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tableau;

	if(!count || !size)
		return (NULL);
	if(!(tableau = malloc(size * count)))
		return (NULL);
	return (ft_bzero(tableau, count * size),tableau);
}
