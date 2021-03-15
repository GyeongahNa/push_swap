/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_little_number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:38:07 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:39:32 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*init_arr(int i, int n, char **argv)
{
	int	*arr;
	int	j;

	arr = malloc(sizeof(int) * n);
	if (i == 1)
	{
		j = 1;
		while (j < n)
		{
			arr[j - 1] = ft_atoi(argv[j]);
			j++;
		}
	}
	else if (i == 0)
	{
		j = 0;
		while (j < get_argv_size(argv))
		{
			arr[j] = ft_atoi(argv[j]);
			j++;
		}
	}
	return (arr);
}

static int	check_two(void)
{
	ft_puts("sa\n");
	return (1);
}

static int	check_case(int n, int *arr)
{
	if (n == 2 && check_two())
		return (1);
	else if (n == 3 && check_three(arr, 0, 1, 2))
		return (1);
	else if (n == 5 && check_five(arr))
		return (1);
	return (0);
}

int			check_little_number(int i, int n, char **argv)
{
	int *arr;

	arr = init_arr(i, n, argv);
	if (check_case(n, arr))
	{
		free(arr);
		return (1);
	}
	free(arr);
	return (0);
}
