/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:18:32 by rmehadje          #+#    #+#             */
/*   Updated: 2023/03/28 16:22:07 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	char		*tmp;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	tmp = (char *)big;
	while (i < len && big[i])
	{
		if (i + ft_strlen(little) <= len
			&& !ft_strncmp(tmp, little, ft_strlen(little)))
		{
			return (tmp);
		}
		i++;
		tmp++;
	}
	return (0);
}
