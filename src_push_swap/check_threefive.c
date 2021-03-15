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

int	check_five(int *arr)
{
	int f_idx;
	int s_idx;
	int t_idx;

	f_idx = get_first_idx(arr);
	s_idx = get_second_idx(arr);
	t_idx = get_third_idx(arr);
	ft_puts("pb\npb\n");
	check_three(arr, 2, 3, 4);
	if (arr[0] < arr[t_idx])
	{
		if (arr[1] > arr[t_idx] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\nra\nra\nra\npa\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\nra\nra\npa\n");
		else if (arr[1] > arr[f_idx])
			ft_puts("pa\nra\npa\n");
		else if (arr[1] < arr[0])
			ft_puts("pa\nra\npa\nrra\n");
		else if (arr[1] > arr[0] && arr[1] < arr[t_idx])
			ft_puts("pa\npa\n");
	}
	else if (arr[0] > arr[t_idx] && arr[0] < arr[s_idx])
	{
		if (arr[1] < arr[t_idx])
			ft_puts("pa\nra\nra\npa\nrra\nrra\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\nrra\npa\nrra\n");
		else if (arr[1] > arr[f_idx])
			ft_puts("pa\nra\nra\npa\nrra\n");
		else if (arr[1] > arr[t_idx] && arr[1] < arr[0])
			ft_puts("ra\npa\nra\npa\nrra\nrra\n");
		else if (arr[1] > arr[0] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\npa\nrra\n");
	}
	else if (arr[0] > arr[s_idx] && arr[0] < arr[f_idx])
	{
		if (arr[1] < arr[t_idx])
			ft_puts("pa\nrra\npa\nra\nra\n");
		else if (arr[1] > arr[t_idx] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\nra\nra\npa\nra\nra\n");
		else if (arr[1] > arr[f_idx])
			ft_puts("pa\nrra\npa\nrra\nrra\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[0])
			ft_puts("rra\npa\nra\npa\nra\nra\n");
		else if (arr[1] > arr[0] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\npa\nrra\nrra\n");
	}
	else if (arr[0] > arr[f_idx])
	{
		if (arr[1] < arr[t_idx])
			ft_puts("pa\npa\nra\n");
		else if (arr[1] > arr[t_idx] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\nrra\npa\nra\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\nra\nra\npa\nra\n");
		else if (arr[1] > arr[f_idx] && arr[1] < arr[0])
			ft_puts("pa\nra\npa\nra\n");
		else if (arr[1] > arr[0])
			ft_puts("pa\npa\nra\nra\n");
	}
	return (1);
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
