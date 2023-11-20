/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:33:58 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/28 15:04:53 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_occurance(char *s, char c)
{
	int		i;
	int		occur;

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

int	ft_wordlen(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_sp(char *str)
{
	char	**split;
	int		i;

	split = ft_split(str, ' ');
	free(str);
	i = 0;
	while (split[i])
	{
		if (check_args(split[i]) == 0)
			return (0);
		i++;
	}
	if (check_dup(split, i) == 0)
		return (free_all(split), 0);
	if (check_mm(split) == 0)
		return (free_all(split), 0);
	init_stack(split);
	return (1);
}

char	**ft_split(char *s, char c)
{
	char		**str;
	int			i;
	int			j;

	str = malloc(sizeof(char *) * (ft_occurance(s, c) + 1));
	if (str == 0)
		return (0);
	i = 0;
	j = 0;
	while (j < ft_occurance(s, c))
	{
		while (s[i] == c)
			i++;
		str[j] = find_word(s + i, c);
		if (str[j] == 0)
		{
			free_all(str);
			return (0);
		}
		i += ft_wordlen(s + i, c);
		j++;
	}
	str[j] = NULL;
	return (str);
}

void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
}
