/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_descending.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:14:44 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:14:47 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_descending(t_list *a, t_list *b)
{
	if (a == NULL || b != NULL)
		return (0);
	while (a->next != NULL)
	{
		if (a->n >= (a->next->n))
			return (0);
		a = a->next;
	}
	return (1);
}
