/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:30:38 by eward             #+#    #+#             */
/*   Updated: 2021/11/09 20:22:12 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rez;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	j = 0;
	i = start;
	rez = (char *)malloc(len + 1);
	if (rez == 0)
		return (0);
	ft_bzero(rez, len + 1);
	while (j < len && i < ft_strlen(s))
	{
		*(rez + j) = *(s + i);
		i++;
		j++;
	}
	return (rez);
}
