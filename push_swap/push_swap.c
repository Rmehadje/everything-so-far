/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:48:26 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/31 15:51:00 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorter(t_list **stack_a, t_list **stack_b, int i)
{
	if (i == 2)
		two_sort(stack_a);
	else if (i == 3)
		three_sort(stack_a);
	else if (i == 4)
		ft_sortagain(stack_a, stack_b);
	else if (i == 5)
		sort_five(stack_a, stack_b);
	else
	{
		first_phase(stack_a, stack_b, i);
		second_phase(stack_a, stack_b, i);
	}
}

int	main(int argc, char **argv)
{

	if (argc <= 1)
		return (1);
	if (argc == 2)
	{
		if ((ft_strlen(argv[1]) == 0))
			return (1);
	}
	init_args(argv);
}
