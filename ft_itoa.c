/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:42:31 by eward             #+#    #+#             */
/*   Updated: 2021/11/11 19:01:32 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	unsigned int	help;
	int				i;

	help = (unsigned int)(n);
	i = 1;
	if (n < 0)
	{
		i++;
		help = (unsigned int)(-n);
	}
	while (help > 9)
	{
		i++;
		help = help / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	help;
	char			*rez;
	int				i;

	help = (unsigned int)(n);
	i = count_digits(n);
	rez = (char *)malloc(sizeof(char) * (i + 1));
	if (rez == 0)
		return (0);
	rez[0] = 0;
	if (n < 0)
	{
		rez[0] = '-';
		help = (unsigned int)(-n);
	}
	rez[i] = '\0';
	i--;
	while (i >= 0 && rez[i] != '-')
	{
		rez[i] = help % 10 + '0';
		i--;
		help = help / 10;
	}
	return (rez);
}
