/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmehadje <rmehadje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:26:03 by rmehadje          #+#    #+#             */
/*   Updated: 2023/10/31 14:40:44 by rmehadje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_list
{
	int				l;
	int				*p;
	int				*top;
	int				data;
	int				content;
	int				pos;
	int				minv;
	int				maxv;
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

//*operations*// 
int				ft_push(t_list **stack_1, t_list **stack_2);
int				pa(t_list **stack_a, t_list	**stack_b);
int				pb(t_list **stack_a, t_list	**stack_b);
int				ft_swap(t_list **stack);
int				sa(t_list **stack_a);
int				sb(t_list **stack_b);
int				ss(t_list **stack_a, t_list **stack_b);
int				ft_rotate(t_list **stack);
int				ra(t_list **stack_a);
int				rb(t_list **stack_b);
int				rr(t_list **stack_a, t_list **stack_b);
int				ft_revrotate(t_list **stack);
int				rra(t_list **stack_a);
int				rrb(t_list **stack_b);
int				rrr(t_list **stack_a, t_list **stack_b);
void			do_op(t_list **stack_a, int flag);
void			do_op2(t_list	**stack_a);
//*argument checking*//
int				check_args(char *argv);
int				check_dup(char **split, int size);
int				check_mm(char **split);
int				init_args(char **argv);
//*sorting*//
void			ft_sorter(t_list **stack_a, t_list **stack_b, int i);
int				ft_counter(t_list *stack, int index);
int				find_min_pos(t_list *stack);
int				find_max_pos(t_list *stack);
int				find_middle(t_list *stack);
void			sort_five(t_list	**stack_a, t_list **stack_b);
bool			sorted_stack(t_list	**stack);
int				two_sort(t_list **stack_a);
int				three_sort(t_list	**stack_a);
void			first_phase(t_list **stack_a, t_list **stack_b, int len);
void			second_phase(t_list **stack_a, t_list **stack_b, int len);
//*initializing stacks*//
void			init_numbers(t_list **stack_a, char **split);
int				init_empty(t_list **stack_b, int size);
void			init_stack(char **split);
//*utils//
t_list			**copy_stack(t_list **stack, char **tmp);
void			find_value_for_index(t_list	*copy, t_list	**stack_a);
static void		sort_for_index2(t_list *sorted, t_list **stack);
void			sort_for_index(t_list **stack, char **tmp);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
char			*find_word(char *s, char c);
char			*ft_strjoin(char *s1, char *s2);
long			ft_atol(char *str);
int				ft_occurance(char *s, char c);
int				ft_wordlen(char *s, char c);
int				ft_sp(char *str);
char			**ft_split(char *s, char c);
void			free_all(char **str);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int content);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_f(t_list **stack_a);
void			ft_sortagain(t_list **stack_a, t_list **stack_b);
int				ft_ifsorted(t_list **stack_a);
int				ft_squareroot(int nb);

#endif