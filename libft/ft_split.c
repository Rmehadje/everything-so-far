/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:05:29 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/17 14:47:15 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_occurance(const char *s, char c)
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

int	ft_wordlen(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
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

char	*find_word(const char *s, char c)
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

char	**ft_split(char const *s, char c)
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
