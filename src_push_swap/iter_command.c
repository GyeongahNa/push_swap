/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 00:47:45 by gna               #+#    #+#             */
/*   Updated: 2021/03/16 00:47:48 by gna              ###   ########.fr       */
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
