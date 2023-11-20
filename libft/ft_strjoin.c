/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 17:24:24 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/14 16:02:59 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*d;

	i = 0;
	j = 0;
	d = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (d == 0)
		return (0);
	while (i < ft_strlen(s1))
	{
		d[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		d[i] = s2[j];
		j++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
