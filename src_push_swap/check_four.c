/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_four.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:37:40 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:37:44 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min(int *arr)
{
	int	i;
	int minv;

	i = 0;
	minv = arr[1];
	while (++i < 4)
	{
		if (minv > arr[i])
			minv = arr[i];
	}
	return (minv);
}

static int	find_max(int *arr)
{
	int	i;
	int maxv;

	i = 0;
	maxv = arr[1];
	while (++i < 4)
	{
		if (maxv < arr[i])
			maxv = arr[i];
	}
	return (maxv);
}

int			check_four(int *arr)
{
	int minv;
	int maxv;

	ft_puts("pb\n");
	minv = find_min(arr);
	maxv = find_max(arr);
	check_three(arr, 1, 2, 3);
	if (minv > arr[0])
		ft_puts("pa\n");
	if (maxv < arr[0])
		ft_puts("pa\nra\n");
	return (1);
}
