/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:53:18 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:54:07 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	iter_command(
		t_list **command, void (*f)(t_list**), t_list **lst, int num)
{
	int i;

	i = 0;
	if (*lst == NULL)
		return ;
	while (i < num)
	{
		f(lst);
		if (f == ra)
			ft_lstadd_back(command, ft_lstnew(RA));
		else if (f == rra)
			ft_lstadd_back(command, ft_lstnew(RRA));
		else if (f == rb)
			ft_lstadd_back(command, ft_lstnew(RB));
		else if (f == rrb)
			ft_lstadd_back(command, ft_lstnew(RRB));
		i++;
	}
}

int		set_top(t_list **command, t_list **lst, int first, int last)
{
	int i;
	int lst_size;

	i = 0;
	lst_size = ft_lstsize(*lst);
	if (last < lst_size / 2)
		iter_command(command, ra, lst, first);
	else if (first >= lst_size / 2)
		iter_command(command, rra, lst, lst_size - last);
	else if (first < lst_size - last)
		iter_command(command, ra, lst, first);
	else
		iter_command(command, rra, lst, lst_size - last);
	return ((*lst)->n);
}

void	sort_before_add_new(t_list **command, t_list **lst, int top)
{
	int	idx;
	int	list_size;

	if (*lst == NULL)
		return ;
	list_size = ft_lstsize(*lst);
	idx = get_smallest_larger(*lst, top);
	if (idx == -1)
		idx = get_smallest(*lst);
	if (idx < list_size / 2)
		iter_command(command, rb, lst, idx);
	else
		iter_command(command, rrb, lst, list_size - idx);
}

void	ft_lstmove(t_list **command, t_list **dest, t_list **src)
{
	int	idx;
	int	lst_size;

	idx = get_largest(*src);
	lst_size = ft_lstsize(*src);
	if (idx < lst_size / 2)
		iter_command(command, rb, src, idx);
	else
		iter_command(command, rrb, src, lst_size - idx);
	idx = 0;
	while (idx < lst_size)
	{
		ft_lstadd_back(command, ft_lstnew(PA));
		pa(dest, src);
		iter_command(command, rrb, src, 1);
		idx++;
	}
}

int		cal_interval(int chunk_num, t_list *a)
{
	int max;
	int	min;
	int	interval;

	max = get_largest_val(a);
	min = get_smallest_val(a);
	interval = (max - min) / chunk_num;
	if ((max - min) % chunk_num != 0)
		interval++;
	return (interval);
}

void	push_swap(t_list **command, int list_num, t_list *a, t_list *b)
{
	int	i;
	int	top;
	int	smallest;
	int	interval;

	i = 0;
	smallest = get_smallest_val(a);
	interval = cal_interval(get_chunk(list_num), a);
	while (i <= get_chunk(list_num))
	{
		while (check_chunk(a, smallest + interval * i, 
		smallest + interval * (i + 1) - 1) != -1)
		{
			top = set_top(
			command, &a, find_first(a, smallest + interval * i,
			smallest + interval * (i + 1) - 1), find_last(
			a, smallest + interval * i, smallest + interval * (i + 1) - 1));
			sort_before_add_new(command, &b, top);
			pb(&a, &b);
			ft_lstadd_back(command, ft_lstnew(PB));
		}
		i++;
	}
	ft_lstmove(command, &a, &b);
}
