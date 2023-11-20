/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:28:14 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/30 17:25:13 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	squareroot(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	if (nb % n == 0)
		return (n);
	else
		return (n - 1);
}

void	ft_sortagain(t_list **stack_a, t_list **stack_b)
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
		rra(stack_a);
	pb(stack_a, stack_b);
	three_sort(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	first_phase(t_list **stack_a, t_list **stack_b, int len)
{
	int		i;
	int		range;

	i = 0;
	range = (squareroot(len) - 1) * 14 / 10;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	second_phase(t_list **stack_a, t_list **stack_b, int len)
{
	int	rbc;
	int	rrbc;

	while (len - 1 >= 0)
	{
		rbc = ft_counter((*stack_b), len - 1);
		rrbc = (len + 3) - rbc;
		if (rbc <= rrbc)
		{
			while ((*stack_b)->index != len - 1)
				rb(stack_b);
			pa(stack_a, stack_b);
			len--;
		}
		else
		{
			while ((*stack_b)->index != len - 1)
				rrb(stack_b);
			pa(stack_a, stack_b);
			len--;
		}
	}
}
