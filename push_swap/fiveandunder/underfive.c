/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   underfive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:51:50 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/28 19:08:48 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	sorted_stack(t_list	**stack)
{
	int	i;

	i = 0;
	if ((*stack)->data > (*stack)->next->data)
		sa(stack);
	return (true);
}

int	two_sort(t_list **stack_a)
{
	if (sorted_stack(stack_a) == false)
		sa(stack_a);
	return (0);
}

int	three_sort(t_list	**stack_a)
{
	if (((*stack_a)->data > (*stack_a)->next->data)
		&& ((*stack_a)->next->data > (*stack_a)->next->next->data))
		do_op(stack_a, 0);
	if (((*stack_a)->data < (*stack_a)->next->data)
		&& ((*stack_a)->next->data > (*stack_a)->next->next->data)
		&& (*stack_a)->data < (*stack_a)->next->next->data)
		do_op2(stack_a);
	if (((*stack_a)->data > (*stack_a)->next->data)
		&& ((*stack_a)->next->data < (*stack_a)->next->next->data)
		&& (*stack_a)->data > (*stack_a)->next->next->data)
		ra(stack_a);
	if (((*stack_a)->data < (*stack_a)->next->data)
		&& ((*stack_a)->next->data > (*stack_a)->next->next->data)
		&& ((*stack_a)->data > (*stack_a)->next->next->data))
		rra(stack_a);
	if (((*stack_a)->data > (*stack_a)->next->data)
		&& ((*stack_a)->next->data < (*stack_a)->next->next->data)
		&& ((*stack_a)->data < (*stack_a)->next->next->data))
		sa(stack_a);
	return (0);
}
