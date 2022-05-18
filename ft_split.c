/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:22:22 by eward             #+#    #+#             */
/*   Updated: 2021/11/12 17:44:43 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
size_t	how_many_words(char const *s, char c)
{
	size_t	rez;
	size_t	i;

	i = 0;
	rez = 0;
	while (*(s + i))
	{
		while (*(s + i) == c)
			i++;
		if (*(s + i))
			rez++;
		while (*(s + i) != c && *(s + i))
			i++;
	}
	return (rez);
}

size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

char	**last_elem(char **rez, size_t j)
{
	rez[j] = NULL;
	return (rez);
}

char	**free_memory(char **rez, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(rez[i]);
		i++;
	}
	free(rez);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**rez;
	size_t	i;
	size_t	j;

	rez = (char **)malloc((how_many_words(s, c) + 1) * sizeof(char *));
	if (rez == 0)
		return (0);
	i = 0;
	j = 0;
	while (*(s + i))
	{
		while (*(s + i) == c)
			i++;
		if (!(*(s + i)))
			return (last_elem(rez, j));
		rez[j] = (char *)malloc((word_len(s + i, c) + 1) * sizeof(char));
		if (rez[j] == 0)
			return (free_memory(rez, j));
		ft_memmove(rez[j], s + i, word_len(s + i, c));
		*(rez[j] + word_len(s + i, c)) = '\0';
		i = i + word_len(s + i, c);
		j++;
	}
	return (last_elem(rez, j));
}
