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
    char    *s2;

    i = 0;
    s2 = (char *)malloc(sizeof(char *) * n + 1);
    s2 = (char *)s1;
    if(!s2)
        return (NULL);
    while (s2[i])
    {
        if (s2[i] == c)
            return ((void *)s1 + i);
        i++;
    }
    return (NULL);
}