/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eward <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:49:33 by eward             #+#    #+#             */
/*   Updated: 2021/11/10 21:01:39 by eward            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	c = '\n';
	write(fd, &c, 1);
}