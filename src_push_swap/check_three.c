/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_threefive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:41:05 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:43:03 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_first_idx(int *arr)
{
	int	a;
	int	b;
	int	c;

	a = arr[2];
	b = arr[3];
	c = arr[4];
	if (a > b && a > c)
		return (2);
	else if (b > a && b > c)
		return (3);
	else
		return (4);
}

int	get_second_idx(int *arr)
{
	int	a;
	int	b;
	int	c;

	a = arr[2];
	b = arr[3];
	c = arr[4];
	if ((b > a && a > c) || (b < a && a < c))
		return (2);
	else if ((a > b && b > c) || (a < b && b < c))
		return (3);
	else
		return (4);
}

int	get_third_idx(int *arr)
{
	int	a;
	int	b;
	int	c;

	a = arr[2];
	b = arr[3];
	c = arr[4];
	if ((b > c && c > a) || (c > b && b > a))
		return (2);
	else if ((a > c && c > b) || (c > a && a > b))
		return (3);
	else
		return (4);
}

int	check_three(int *arr, int zero, int one, int two)
{
	if (arr[zero] > arr[one] && arr[zero] < arr[two] && arr[one] < arr[two])
		ft_puts("sa\n");
	if (arr[zero] > arr[one] && arr[one] > arr[two])
		ft_puts("sa\nrra\n");
	if (arr[zero] > arr[one] && arr[two] > arr[one] && arr[two] < arr[zero])
		ft_puts("ra\n");
	if (arr[zero] < arr[one] && arr[two] < arr[one] && arr[zero] < arr[two])
		ft_puts("sa\nra\n");
	if (arr[zero] < arr[one] && arr[two] < arr[one] && arr[zero] > arr[two])
		ft_puts("rra\n");
	return (1);
}
