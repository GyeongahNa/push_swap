/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value_in_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:45:24 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:45:29 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_smallest_val(t_list *lst)
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
	return (smallest);
}

int	get_largest_val(t_list *lst)
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
	return (largest);
}
