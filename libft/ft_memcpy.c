/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:02:48 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/12 13:55:02 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const char *src, size_t n)
{
	size_t							i;
	char							*str1;
	const char						*str2;

	if (src == 0 && dest == 0)
		return (dest);
	if (n == 0)
		return (dest);
	str2 = (const char *)src;
	str1 = (char *)dest;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
