/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:16:10 by eward             #+#    #+#             */
/*   Updated: 2021/11/11 19:06:47 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	num_size(const char *str)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (ft_isspace(*(str + i)))
		i++;
	if (*(str + i) == '+' || *(str + i) == '-')
		i++;
	while (ft_isdigit(*(str + i)))
	{
		size++;
		i++;
	}
	return (size);
}

int	ft_atoi(const char *str)
{
	long	rez;
	size_t	i;
	long	sign;

	rez = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(*(str + i)))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	while (*(str + i) && ft_isdigit(*(str + i)))
	{
		rez = rez * 10 + *(str + i) - '0';
		if (rez < 0 && sign == -1)
			return ((int)LONG_MIN);
		if (rez < 0 && sign == 1)
			return ((int)LONG_MAX);
		i++;
	}
	return ((int)(rez * sign));
}
