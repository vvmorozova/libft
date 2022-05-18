/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:31:58 by eward             #+#    #+#             */
/*   Updated: 2021/11/09 19:12:41 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = ft_strlen(s);
	if ((char)c == '\0')
	{
		str = (char *)s + ft_strlen(s);
		return (str);
	}
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
		{
			str = (char *)s + i;
			return (str);
		}
		i--;
	}
	return (0);
}
