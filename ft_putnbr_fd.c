/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:52:01 by eward             #+#    #+#             */
/*   Updated: 2021/11/10 21:00:42 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digs(int n)
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

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	help;
	char			rez[50];
	int				i;

	help = (unsigned int)(n);
	i = count_digs(n);
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
	write(fd, rez, ft_strlen(rez));
}
