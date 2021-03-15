/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:15:36 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:15:39 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list *a_ptr;
	t_list *b_ptr;

	if (a == NULL || b == NULL || (*a) == NULL)
		return ;
	a_ptr = (*a);
	b_ptr = (*b);
	ft_lstadd_front(b, ft_lstnew(a_ptr->n));
	ft_lstdel_front(a);
}
