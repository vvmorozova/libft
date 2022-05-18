/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:17:21 by eward             #+#    #+#             */
/*   Updated: 2021/11/09 22:12:31 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	begin(char const *s1, char const *set)
{
	size_t	i;
	int		flag;
	size_t	j;

	flag = 0;
	j = 0;
	while (*(s1 + j) && !flag)
	{
		flag = 1;
		i = 0;
		while (*(set + i) && flag)
		{
			if (ft_strchr(s1 + j, *(set + i)) == s1 + j)
				flag = 0;
			i++;
		}
		j++;
	}
	if (!(*(s1 + j)))
		return (0);
	return (j - 1);
}

size_t	end(char const *s1, char const *set)
{
	size_t	i;
	int		flag;
	size_t	j;

	flag = 0;
	j = ft_strlen(s1);
	while (j > 0 && !flag)
	{
		j--;
		flag = 1;
		i = 0;
		while (*(set + i) && flag)
		{
			if (ft_strchr(s1 + j, *(set + i)) == s1 + j)
				flag = 0;
			i++;
		}
	}
	if (j == 0)
		return (0);
	return (j + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rez;
	size_t	last;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	i = begin(s1, set);
	last = end(s1, set);
	rez = (char *)malloc(last - i + 1);
	if (!rez)
		return (0);
	j = 0;
	while (i < last)
	{
		*(rez + j) = *(s1 + i);
		i++;
		j++;
	}
	*(rez + j) = '\0';
	return (rez);
}
