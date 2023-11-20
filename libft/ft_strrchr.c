/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:18:04 by rmehadje          #+#    #+#             */
/*   Updated: 2023/03/31 19:02:44 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*tmp;

	i = 0;
	tmp = (char *)s;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if ((unsigned char)tmp[i] == (unsigned char)c)
			return (tmp + i);
		i--;
	}
	return (0);
}
