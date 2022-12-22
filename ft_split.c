/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:50:05 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/20 11:50:05 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	tmp = 0;

	while (s[i])
	{
		if(s[i] == c)
			tmp++;
		i++;
	}
	return(tmp);
}

char	**split_word(const char *s, char c, char **tab)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = 0;
	while(s[end])
	{
		while(s[end] != c)
			end++;
		if (s[end - 1] != c)
			*tab = ft_substr(s, start , end - start);
		start = end;
		tab++;
		end++;
	}
	*tab = "\0";
	return(tab);
}
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	tab = malloc(sizeof(char *) * count_word(s, c) + 1);
	j = 0;
	if (!s || !tab)
		return(NULL);
	return(split_word(s, c, tab));
	

}