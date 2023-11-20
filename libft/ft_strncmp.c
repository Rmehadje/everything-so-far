/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:03:00 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/17 17:03:56 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t					i;
	unsigned char			*tmp1;
	unsigned char			*tmp2;

	i = 0;
	if (n <= 0)
		return (0);
	tmp1 = (unsigned char *)str1;
	tmp2 = (unsigned char *)str2;
	while (tmp1[i] && tmp2[i] && tmp1[i] == tmp2[i] && i < n - 1)
		i++;
	return ((unsigned)tmp1[i] - (unsigned)tmp2[i]);
}
