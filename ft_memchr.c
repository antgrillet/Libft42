/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:14:59 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 15:14:59 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s1, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (s1[i])
    {
        if (s1[i] == c)
            return (s[i]);
        i++;
    }
    return (NULL);
}