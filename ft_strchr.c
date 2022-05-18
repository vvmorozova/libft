/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:31:58 by eward             #+#    #+#             */
/*   Updated: 2021/11/09 19:11:57 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	if ((char)c == '\0')
	{
		str = (char *)s + ft_strlen(s);
		return (str);
	}
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
		{
			str = (char *)s + i;
			return (str);
		}
		i++;
	}
	return (0);
}
