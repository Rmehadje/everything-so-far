/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:15:27 by rmehadje          #+#    #+#             */
/*   Updated: 2023/08/19 16:29:07 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char	*s)
{
	unsigned int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin( char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*d;

	d = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (d == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		d[i] = s2[j];
		i++;
		j++;
	}
	free(s1);
	d[i] = '\0';
	return (d);
}

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = (char *)s;
	while (tmp[i])
	{
		if ((unsigned char)tmp[i] == (unsigned char)c)
			return (tmp + i);
		i++;
	}
	return (0);
}
