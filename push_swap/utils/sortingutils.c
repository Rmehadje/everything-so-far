/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingutils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:03:01 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/30 17:39:25 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	**copy_stack(t_list	**stack, char **tmp)
{
	t_list	**copy;

	copy = NULL;
	if (stack)
	{
		copy = (t_list **)malloc(sizeof(t_list *));
		init_numbers(copy, tmp);
	}
	return (copy);
}

void	find_value_for_index(t_list	*copy, t_list	**stack_a)
{
	t_list	*tmp;

	while (copy)
	{
		tmp = *stack_a;
		while (tmp)
		{
			if (tmp->data == copy->data)
			{
				tmp->index = copy->index;
				break ;
			}
			tmp = tmp->next;
		}
		copy = copy->next;
	}
}

void	sort_for_index(t_list **stack, char **tmp)
{
	t_list	*sorted;
	t_list	**current;
	t_list	*ttmp;

	current = copy_stack(stack, tmp);
	sorted = *current;
	while (sorted)
	{
		ttmp = *current;
		sorted->index = 0;
		while (ttmp)
		{
			if (sorted->data > ttmp->data)
				sorted->index++;
			ttmp = ttmp->next;
		}
		sorted = sorted->next;
	}
	find_value_for_index(*current, stack);
	ft_f(current);
	free(current);
}
