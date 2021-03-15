/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:17:31 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:17:34 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **b)
{
	t_list	*ptr;
	t_list	*iter;
	t_list	*last;

	if (b == NULL || (*b) == NULL)
		return ;
	ptr = (*b);
	iter = ptr;
	last = ft_lstlast(iter);
	ft_lstadd_front(b, ft_lstnew(last->n));
	ft_lstdel_back(b);
}
