/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argchecking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:13:19 by rmehadje          #+#    #+#             */
/*   Updated: 2023/11/20 17:52:51 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(char *argv)
{
	int	i;

	i = -1;
	while (argv[++i])
	{
		if ((argv[i] >= '0' && argv[i] <= '9') || (argv[i] == '-'
				|| argv[i] == '+') || argv[i] == ' ')
		{
			if (argv[i] == '-' || argv[i] == '+')
			{
				if (argv[i + 1] != '-' && argv[i + 1] != '+'
					&& (argv[i + 1] < '0' || argv[i + 1] > '9'))
					return (write(2, "Error\n", 7), 0);
			}
			if (argv[i] >= '0' && argv[i] <= '9')
			{
				if (argv[i + 1] == '-' || argv[i + 1] == '+')
					return (write(2, "Error\n", 7), 0);
			}
		}
		else
			return (write(2, "Error\n", 7), 0);
	}
	return (1);
}

int	check_dup(char **split, int size)
{
	int	i;
	int	*tmp;
	int	j;

	tmp = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (split[i])
	{
		tmp[i] = ft_atoi(split[i]);
		i++;
	}
	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (tmp[i] == tmp[j])
				return (free(tmp), write(2, "Error\n", 7), 0);
		}
	}
	free(tmp);
	return (1);
}

int	check_mm(char **split)
{
	long		tmp;
	int			i;

	i = 0;
	while (split[i])
	{
		tmp = ft_atol(split[i]);
		if (tmp >= 2147483647 || tmp <= -2147483648)
			return (write(2, "Error\n", 7), 0);
		else
			i++;
	}
	return (1);
}

int	init_args(char **argv)
{
	char	*tmp;
	int		i;
	char	*ttmp;

	i = 2;
	ttmp = malloc(1);
	ttmp[0] = '\0';
	tmp = ft_strjoin(ttmp, argv[1]);
	free(ttmp);
	while (argv[i])
	{
		ttmp = ft_strjoin(tmp, " ");
		free(tmp);
		tmp = ft_strjoin(ttmp, argv[i]);
		free(ttmp);
		i++;
	}
	if (ft_sp(tmp) == 0)
		return (0);
	return (1);
}

void	free_list(t_list	*head)
{
	t_list	*current;
	t_list	*tmp;

	current = head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
