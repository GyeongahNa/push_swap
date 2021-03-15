/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:56:04 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 13:56:07 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int n)
{
	t_list *ptr;

	if (!(ptr = malloc(sizeof(t_list))))
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	return (ptr);
}
