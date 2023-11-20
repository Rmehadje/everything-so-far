/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:06:57 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/17 14:58:27 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		if ((char)tmp[i] == (char)c)
			return ((char *)tmp + i);
		i++;
	}
	return (0);
}
