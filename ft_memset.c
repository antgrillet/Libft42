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

void    ft_memset(void *pointer, int value, size_t len)
{
    unsigned int i;
    unsigned char *valuee;

    i = 0;
    valuee = (unsigned char *)pointer;

    while (i != len)
    {
        valuee[i] = value;
        i++;
    }
    pointer = (void *)valuee;
}