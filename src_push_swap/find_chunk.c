/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:43:25 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:43:27 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_chunk(t_list *lst, int start, int end)
{
	while (lst)
	{
		if ((lst->n >= start) && (lst->n <= end))
			return (1);
		lst = lst->next;
	}
	return (-1);
}

int	find_first(t_list *lst, int start, int end)
{
	int idx;

	idx = 0;
	while (lst)
	{
		if ((lst->n >= start) && (lst->n <= end))
			return (idx);
		idx++;
		lst = lst->next;
	}
	return (-1);
}

int	find_last(t_list *lst, int start, int end)
{
	int idx;
	int last;

	idx = 0;
	last = -1;
	while (lst)
	{
		if ((lst->n >= start) && (lst->n <= end))
			last = idx;
		idx++;
		lst = lst->next;
	}
	return (last);
}
