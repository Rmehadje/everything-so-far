/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivesort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:58:57 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/29 17:50:21 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_counter(t_list *stack, int index)
{
	int	i;

	i = 0;
	while (stack && stack->index != index)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	find_min_pos(t_list *stack)
{
	int	minp;
	int	minv;
	int	p;

	p = 0;
	minp = 0;
	minv = stack->data;
	while (stack)
	{
		if (stack->data < minv)
		{
			minv = stack->data;
			minp = p;
		}
		stack = stack->next;
		p++;
	}
	return (minp);
}

int	find_max_pos(t_list *stack)
{
	int	maxp;
	int	maxv;
	int	p;

	p = 0;
	maxp = 0;
	maxv = stack->content;
	while (stack)
	{
		if (stack->content > maxv)
		{
			maxv = stack->content;
			maxp = p;
		}
		stack = stack->next;
		p++;
	}
	return (maxp);
}

int	find_middle(t_list *stack)
{
	int		middle;
	int		p;
	t_list	*tmp;

	middle = 0;
	tmp = stack;
	stack->minv = find_min_pos(stack);
	stack->maxv = find_max_pos(stack);
	middle = stack->minv;
	while (tmp->content != stack->maxv && tmp->content != stack->minv)
	{
		middle = tmp->content;
		break ;
	}
	p = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->content == middle)
			return (p);
		tmp = tmp->next;
		p++;
	}
	return (-1);
}

void	sort_five(t_list	**stack_a, t_list **stack_b)
{
	int	i;

	i = find_min_pos(*stack_a);
	if (i == 1)
		sa(stack_a);
	else if (i == 2)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (i == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (i == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	ft_sortagain(stack_a, stack_b);
}
