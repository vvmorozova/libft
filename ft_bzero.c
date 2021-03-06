/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:54:27 by eward             #+#    #+#             */
/*   Updated: 2021/10/19 15:16:43 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(s + i++)) = '\0';
	}
}
