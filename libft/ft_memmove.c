/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:07:30 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/03 13:58:52 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t						i;
	const char					*str1;
	unsigned char				*str2;

	i = 0;
	str1 = (char *)src;
	str2 = (unsigned char *)dest;
	if (dest < src && src - dest - n < 0)
	{
		while (i < n)
		{	
			str2[i] = str1[i];
			i++;
		}
		return (dest);
	}
	if (dest > src && dest - src - n > 0)
	{
		while (n--)
			str2[n] = str1[n];
		return (dest);
	}
	ft_memcpy(str2, str1, n);
	return (dest);
}
