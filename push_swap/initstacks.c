/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initstacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:32:53 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/30 14:10:18 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_numbers(t_list **stack_a, char **split)
{
	int		i;
	t_list	*new;

	i = 1;
	(*stack_a) = ft_lstnew(ft_atoi(split[0]));
	while (split[i])
	{
		new = ft_lstnew(ft_atoi(split[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
}

void	init_stack(char **split)
{
	t_list	**stack_a;
	t_list	**stack_b;
	int		num;

	num = 0;
	stack_a = (t_list **)malloc(sizeof(t_list *));
	init_numbers(stack_a, split);
	stack_b = (t_list **)malloc(sizeof(t_list *));
	*stack_b = NULL;
	while (split[num])
		num++;
	if (ft_ifsorted(stack_a) == 0)
	{
		sort_for_index(stack_a, split);
		ft_sorter(stack_a, stack_b, num);
	}
	ft_f(stack_a);
	free(stack_a);
	free(stack_b);
	free_all(split);
}

int	ft_ifsorted(t_list **stack_a)
{
	int		i;
	t_list	*head;

	i = 0;
	head = *stack_a;
	while (head->next != NULL)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}
