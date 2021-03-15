/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:18:40 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:18:43 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **b)
{
	t_list	*ptr;

	if (b == NULL || ft_lstsize((*b)) <= 1)
		return ;
	ptr = (*b);
	swap(ptr, ptr->next);
}
