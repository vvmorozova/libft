/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:55:00 by eward             #+#    #+#             */
/*   Updated: 2021/11/11 18:56:51 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	j = 0;
	while (i < len && *(haystack + i) && j < needle_len)
	{
		while (*(haystack + i) == *(needle + j) && j < needle_len && i < len)
		{
			j++;
			i++;
		}
		if (j < needle_len)
		{
			i = i - j;
			j = 0;
			i++;
		}
	}
	if (j == needle_len)
		return ((char *)(haystack + i - j));
	else
		return (0);
}
