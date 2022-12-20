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

size_t	count_word(const char *str, char c)
{
	size_t	i;
	size_t	ii;
	size_t	iii;

	i = 0;
	ii = 0;
	iii = 0;
	while (str[ii])
	{
		if (str[ii] != c && i != 1)
		{
			iii++;
			i++;
		}
		else if (str[ii] == c)
		{
			i = 0;
		}
		ii++;
	}
	return (iii);
}

char	*copy_word(char const *s, size_t i, int j)
{
	size_t	jj;
	char	*copied_word;

	jj = 0;
	copied_word = malloc(sizeof(char) * (i - j + 1));
	while ((size_t)j != i)
	{
		copied_word[jj] = s[j];
		j++;
		jj++;
	}
	copied_word[jj] = '\0';
	return (copied_word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	size_t	y;
	char	**tab;

	i = 0;
	j = -1;
	y = 0;
	tab = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!s || !c || !tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && j < 0)
		{
			j = i;
		}
		if (s[i] == c)
		{
			tab[y] = copy_word(s, i, j);
			y++;
			j = -1;
		}
		i++;
	}
	tab[y] = 0;
	return (tab);
}
/*
int	main(void)
{
	size_t	i = 0;
	char	**tab;
	const char	exemple[] = "bonjour je m'apelle anto.";

	tab = malloc(sizeof(char *) * 25);
	tab = ft_split(exemple, ',');
	while(ft_split(exemple, ',')[i])
	{
		printf("%s" , ft_split(exemple, ',')[i]);
		i++;
	}
}
*/ 