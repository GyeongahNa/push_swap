/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:03:44 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:03:47 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_front(t_list **lst)
{
	t_list	*ptr;
	t_list	*tmp;

	if (lst == 0)
		return ;
	ptr = (*lst);
	tmp = ptr->next;
	ft_lstdelone(ptr);
	(*lst) = tmp;
}
