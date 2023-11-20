/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:08:49 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/17 17:18:54 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = (char *)str;
	while (i <= ft_strlen(tmp))
	{
		if ((unsigned char)tmp[i] == (unsigned char)c)
			return (tmp + i);
		i++;
	}
	return (0);
}
