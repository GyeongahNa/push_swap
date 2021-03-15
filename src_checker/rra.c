/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:17:14 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:17:17 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*ptr;
	t_list	*iter;
	t_list	*last;

	if (a == NULL || (*a) == NULL)
		return ;
	ptr = (*a);
	iter = ptr;
	last = ft_lstlast(iter);
	ft_lstadd_front(a, ft_lstnew(last->n));
	ft_lstdel_back(a);
}
