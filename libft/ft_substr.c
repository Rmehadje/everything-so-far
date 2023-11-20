/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:22:11 by rmehadje          #+#    #+#             */
/*   Updated: 2023/09/17 16:46:25 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int			i;
	char					*d;

	i = 0;
	if (start >= ft_strlen(s))
	{
		d = malloc(1);
		if (d == 0)
			return (0);
		d[0] = '\0';
		return (d);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	d = malloc(len + 1);
	if (d == 0)
		return (0);
	while (s[i] && i < len)
	{
		d[i] = s[start];
		start++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
