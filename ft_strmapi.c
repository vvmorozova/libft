/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:03:51 by eward             #+#    #+#             */
/*   Updated: 2021/11/10 20:23:05 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rez;

	if (!s || !f)
		return (0);
	rez = (char *)malloc(ft_strlen(s) + 1);
	if (rez == 0)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(rez + i) = (*f)(i, *(s + i));
		i++;
	}
	*(rez + i) = '\0';
	return (rez);
}
