/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:21:22 by rmehadje          #+#    #+#             */
/*   Updated: 2023/03/30 17:07:13 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int		i;
	unsigned int		nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	i = (unsigned int)n;
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	else
	{
		nb = i + '0';
		ft_putchar_fd(nb, fd);
	}
}
