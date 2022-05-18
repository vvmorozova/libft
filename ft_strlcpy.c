/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:04:56 by eward             #+#    #+#             */
/*   Updated: 2021/11/11 19:47:44 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	i;
	unsigned long	j;

	j = 0;
	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	while (j < dstsize - 1 && *(src + j))
	{
		*(dst + j) = *(src + j);
		j++;
	}
	*(dst + j) = '\0';
	return (i);
}
