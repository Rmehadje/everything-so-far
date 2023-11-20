/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:20:38 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/12 14:57:44 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (size != 0 && SIZE_MAX / size < nmemb)
		return (0);
	s = malloc(nmemb * size);
	if (s == 0)
		return (0);
	ft_bzero(s, size * nmemb);
	return (s);
}
