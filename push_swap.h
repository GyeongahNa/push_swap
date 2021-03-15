/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:07:20 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:08:23 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "get_next_line/get_next_line.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define RA 1
# define RB 2
# define RRA 3
# define RRB 4
# define PA 5
# define PB 6

void	swap(t_list *lst1, t_list *lst2);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	print_stack(t_list *stack);
void	print_process(char *command, t_list *a, t_list *b);
int		call_command(t_list **a_start, t_list **b_start);
int		check_argv(int start, int len, char **argv);
int		check_descending(t_list *a, t_list *b);
void	push_swap(t_list **command, int list_num, t_list *a, t_list *b);
void	print_total_command(t_list *cmd_lst);
int		check_chunk(t_list *lst, int start, int end);
int		find_first(t_list *lst, int start, int end);
int		find_last(t_list *lst, int start, int end);
int		get_first_larger(t_list *lst, int top);
int		get_smallest_larger(t_list *lst, int top);
int		get_smallest(t_list *lst);
int		get_largest(t_list *lst);
int		get_cmd_num(int cmd, t_list *cmd_lst);
void	iterate_prints(int cnt, char *str);
void	print_r_command(int cnt_ra, int cnt_rb, int cnt_rra, int cnt_rrb);
void	print_rest_command(t_list *cmd_lst);
void	print_total_command(t_list *cmd_lst);
int		check_little_number(int i, int n, char **argv);
int		check_five(int *arr);
int		check_three(int *arr, int zero, int one, int two);
int		check_four(int *arr);
int		get_chunk(int n);
int		get_argv_size(char **argv);
int		get_smallest_val(t_list *lst);
int		get_largest_val(t_list *lst);
void	iter_command(
		t_list **command, void (*f)(t_list**), t_list **lst, int num);

#endif
