/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:21:17 by rmehadje          #+#    #+#             */
/*   Updated: 2023/09/04 15:40:43 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int n)
{
	int		res;

	res = 1;
	while (n > 0)
	{
		res = res * 10;
		n--;
	}
	return (res);
}

char	*ft_str(char *s, int len, int i, unsigned int res)
{
	while (i < len)
	{
		s[i] = res / ft_pow (len - 1 - i) + '0';
		res = res % ft_pow (len - 1 - i);
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	ft_st(int n)
{
	int					j;
	unsigned int		res;

	j = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		j++;
		res = n * -1;
	}
	else
		res = n;
	while (res > 0)
	{
		res = res / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	unsigned int	res;
	int				i;
	int				len;
	char			*s;

	i = 0;
	len = ft_st(n);
	s = malloc(len + 1);
	if (s == 0)
		return (0);
	if (n < 0)
	{
		s[i] = '-';
		res = n * -1;
		i++;
	}
	else
		res = n;
	s = ft_str(s, len, i, res);
	return (s);
}
