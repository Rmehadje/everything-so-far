/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:09:36 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/28 15:06:52 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	ft_atoi(char *str)
{
	int		i;
	int		res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * sign);
}

char	*find_word(char *s, char c)
{
	char		*word;
	int			i;

	i = 0;
	word = malloc(ft_wordlen(s, c) + 1);
	if (word == 0)
		return (0);
	while (i < ft_wordlen(s, c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int			i;
	int			j;
	char		*d;

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

long	ft_atol(char *str)
{
	int			i;
	long		res;
	long		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * sign);
}
