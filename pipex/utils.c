/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:01:46 by rmehadje          #+#    #+#             */
/*   Updated: 2023/09/27 12:55:02 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	while (tmp1[i] && tmp2[i] && i < (n - 1) && tmp1[i] == tmp2[i])
		i++;
	return ((unsigned)tmp1[i] - (unsigned)tmp2[i]);
}

char	*ft_substr(char *s, int start, int len)
{
	int			i;
	char		*d;

	i = 0;
	if (start >= ft_strlen(s))
	{
		d = malloc(1);
		if (d == 0)
			return (0);
		d[0] = '\0';
		return (d);
	}
	if (len < ft_strlen(s + start))
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

int	ft_occurance(const char *s, char c)
{
	int	i;
	int	occur;

	i = 0;
	occur = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			occur++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (occur);
}

int	ft_wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
