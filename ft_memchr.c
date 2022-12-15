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
    s2 = (char *)s1;
    if(!s2)
        return (NULL);
    while (s2[i] && i < n)
    {
        if (s2[i] == (unsigned char)c)
            return ((void*)s1[i]);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char s[] = {0, 1, 2 ,3 ,4 ,5};
    ft_memchr(s,)
    printf()
}