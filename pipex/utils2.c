/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:43:41 by rmehadje          #+#    #+#             */
/*   Updated: 2023/09/28 16:47:37 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

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
	int		i;
	char	*word;

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

char	**ft_split(const char *s, char c)
{
	int			i;
	int			j;	
	char		**str;

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

int	read_or_write(char *s, int rw)
{
	int	res;

	if (rw == 0)
		res = open(s, O_RDONLY);
	if (rw == 1)
		res = open (s, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (rw == -1)
		exit (0);
	return (res);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int			i;
	int			j;
	char		*str;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) +1);
	if (str == 0)
		return (0);
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
