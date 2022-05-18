/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:11:50 by eward             #+#    #+#             */
/*   Updated: 2021/11/09 19:14:43 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)(s1);
	str2 = (unsigned char *)(s2);
	i = 0;
	while (*(str1 + i) && *(str2 + i) && i < n)
	{
		if (*(str1 + i) != *(str2 + i))
			return (*((unsigned char *)(s1 + i)) -
					*((unsigned char *)(s2 + i)));
		i++;
	}
	if (i == n)
		return (0);
	return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
}
