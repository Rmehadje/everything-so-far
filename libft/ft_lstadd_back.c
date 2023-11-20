/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:51:53 by rmehadje          #+#    #+#             */
/*   Updated: 2023/04/06 14:50:20 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*tmp;

	tmp = (*lst);
	if (lst)
	{
		if ((*lst) == 0)
			(*lst) = new;
		else
		{
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
		}
	}
}
