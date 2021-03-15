/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_idx_in_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:44:59 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:45:02 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_first_larger(t_list *lst, int top)
{
	while (lst)
	{
		if (lst->n > top)
			return (lst->n);
		lst = lst->next;
	}
	return (top);
}

int	get_smallest_larger(t_list *lst, int top)
{
	int idx;
	int larger_idx;
	int s_larger;

	idx = 0;
	larger_idx = -1;
	s_larger = get_first_larger(lst, top);
	while (lst)
	{
		if ((lst->n > top) && (lst->n <= s_larger))
		{
			s_larger = lst->n;
			larger_idx = idx;
		}
		idx++;
		lst = lst->next;
	}
	return (larger_idx);
}

int	get_smallest(t_list *lst)
{
	int idx;
	int smallest_idx;
	int smallest;

	idx = 0;
	smallest_idx = 0;
	smallest = lst->n;
	while (lst)
	{
		if (smallest > lst->n)
		{
			smallest = lst->n;
			smallest_idx = idx;
		}
		idx++;
		lst = lst->next;
	}
	return (smallest_idx);
}

int	get_largest(t_list *lst)
{
	int	idx;
	int	largest_idx;
	int	largest;

	idx = 0;
	largest_idx = 0;
	largest = lst->n;
	if (lst == NULL)
		return (-1);
	while (lst)
	{
		if (lst->n > largest)
		{
			largest = lst->n;
			largest_idx = idx;
		}
		idx++;
		lst = lst->next;
	}
	return (largest_idx);
}
