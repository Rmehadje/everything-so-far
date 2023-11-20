/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:48:27 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/30 17:24:01 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_list **stack_1, t_list **stack_2)
{
	t_list	*ttmp;
	t_list	*tmp;
	t_list	*w;

	if (!stack_2)
		return (-1);
	tmp = (*stack_2)->next;
	ttmp = *stack_2;
	w = *stack_1;
	ttmp->next = w;
	*stack_1 = ttmp;
	*stack_2 = tmp;
	return (0);
}

int	pa(t_list	**stack_a, t_list	**stack_b)
{
	if (ft_push(stack_a, stack_b) == -1)
		return (-1);
	write(1, "pa\n", 3);
	return (0);
}

int	pb(t_list	**stack_a, t_list	**stack_b)
{
	if (ft_push(stack_b, stack_a) == -1)
		return (-1);
	write(1, "pb\n", 3);
	return (0);
}

void	do_op(t_list **stack_a, int flag)
{
	sa(stack_a);
	if (flag == 1)
		ra(stack_a);
	else if (flag == 0)
		rra(stack_a);
}

void	do_op2(t_list	**stack_a)
{
	rra(stack_a);
	sa(stack_a);
}
