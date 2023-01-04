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

void	**free_split(char **tab)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			free(tab[i][j]);
			j++;
		}
		free(tab[i]);
		i++;
	}
	
}

static int	count_for_malloc(const char *s, char c)
{
	int	i;
	int	marker;

	i = 0;
	marker = 0;
	while (*s)
	{
		if (*s != c && marker == 0)
		{
			marker = 1;
			i++;
		}
		else if (*s == c)
			marker = 0;
		s++;
	}
	return (i);
}

static char	*create_charr(const char *s, int start, int end)
{
	char	*charr;
	int		i;

	i = 0;
	charr = malloc(sizeof(char) * (end - start + 1));
	if (!charr)
		return (NULL);
	while (start < end)
	{
		charr[i] = s[start];	
		i++;
		start++;
	}
	charr[i] = '\0';
	return (charr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	index_of_split;
	int		marker;
	char	**split;

	split = malloc(sizeof(char *) * (count_for_malloc(s, c) + 1));
	if (!s || !split || !c)
		return (0);
	i = 0;
	index_of_split = 0;
	marker = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && marker < 0)
			marker = i;
		else if ((s[i] == c || i == ft_strlen(s)) && marker >= 0)
		{
			split[index_of_split++] = create_charr(s, marker, i);
			marker = -1;
		}
		i++;
	}
	split[index_of_split] = 0;
	return (split);
}
