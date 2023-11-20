/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:49:57 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/29 17:41:10 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_swap(t_list **stack)
{
	t_list	*start;
	t_list	*tmp;
	t_list	*head;
	t_list	*fin;

	if (!stack || !(*stack) || !(*stack)->next)
		return (-1);
	head = *stack;
	fin = head->next->next;
	tmp = head->next;
	*stack = tmp;
	(*stack)->next = head;
	(*stack)->next->next = fin;
	return (0);
}

int	sa(t_list	**stack_a)
{
	if (ft_swap(stack_a) == -1)
		return (-1);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_list	**stack_b)
{
	if (ft_swap(stack_b) == -1)
		return (-1);
	write(1, "sb\n", 3);
	return (0);
}

int	ss(t_list	**stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return (-1);
	ft_swap(stack_a);
	ft_swap(stack_b);
	write(1, "ss\n", 3);
	return (0);
}
