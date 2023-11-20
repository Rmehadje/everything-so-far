/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:50:51 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/30 13:34:36 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_revrotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	first = *stack;
	last = first;
	while (last->next && last->next->next)
		last = last->next;
	last->next->next = first;
	*stack = last->next;
	last->next = NULL;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (ft_revrotate(stack_a) == -1)
		return (-1);
	write(1, "rra\n", 4);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (ft_revrotate(stack_b) == -1)
		return (-1);
	write(1, "rrb\n", 4);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return (-1);
	ft_revrotate(stack_a);
	ft_revrotate(stack_b);
	write(1, "rrr\n", 4);
	return (0);
}
