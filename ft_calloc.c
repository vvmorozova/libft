/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:08:53 by eward             #+#    #+#             */
/*   Updated: 2021/11/09 20:07:56 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*rez;

	i = 0;
	rez = (void *)malloc(count * size);
	if (rez == 0)
		return (0);
	ft_bzero(rez, count * size);
	return (rez);
}
