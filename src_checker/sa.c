/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:18:27 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:18:30 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *lst1, t_list *lst2)
{
	int	tmp;

	tmp = lst1->n;
	lst1->n = lst2->n;
	lst2->n = tmp;
}

void	sa(t_list **a)
{
	t_list *ptr;

	if (a == NULL || ft_lstsize((*a)) <= 1)
		return ;
	ptr = (*a);
	swap(ptr, ptr->next);
}
