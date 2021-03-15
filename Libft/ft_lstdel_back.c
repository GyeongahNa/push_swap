/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:54:39 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 13:54:48 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_back(t_list **lst)
{
	t_list	*prev;
	t_list	*iter;

	if (lst == 0)
		return ;
	prev = (*lst);
	iter = (*lst)->next;
	while (iter->next != NULL)
	{
		prev = iter;
		iter = iter->next;
	}
	ft_lstdelone(iter);
	prev->next = NULL;
}
