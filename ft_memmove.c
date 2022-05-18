/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:01:02 by eward             #+#    #+#             */
/*   Updated: 2021/10/19 18:55:54 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	unsigned long	i;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	if (src >= dst)
	{
		while ((i < len))
		{
			*((char *)(dst + i)) = *((char *)(src + i));
			i++;
		}
	}
	else
	{
		while ((i < len--))
		{
			*((char *)(dst + len)) = *((char *)(src + len));
		}
	}
	return (dst);
}
