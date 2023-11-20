/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:48:43 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/17 15:09:33 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strcpm(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	if (set[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	size_t				j;
	char				*d;

	i = 0;
	j = ft_strlen(s1);
	if (ft_strlen(set) == 0 && !s1[i])
		return (ft_strdup(""));
	if (ft_strlen(s1) == 0)
		return (ft_strdup(s1));
	while (strcpm(set, s1[i]) && s1[i])
		i++;
	while (strcpm(set, s1[j]) && j > i)
		j--;
	j++;
	d = malloc(j - i + 1);
	if (d == 0)
		return (0);
	ft_strlcpy(d, s1 + i, j - i + 1);
	return (d);
}
