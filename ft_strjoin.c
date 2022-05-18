/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:04:29 by eward             #+#    #+#             */
/*   Updated: 2021/11/09 20:24:14 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rez;

	if (!s1 || !s2)
		return (0);
	rez = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (rez == 0)
		return (0);
	ft_memmove(rez, s1, ft_strlen(s1));
	ft_memmove(rez + ft_strlen(s1), s2, ft_strlen(s2));
	*(rez + ft_strlen(s1) + ft_strlen(s2)) = '\0';
	return (rez);
}
