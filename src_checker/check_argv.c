/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:14:29 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:24:10 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9')
			&& (str[i] != ' ') && (str[i] != '-'))
			return (0);
		i++;
	}
	return (1);
}

static int	check_range(char *str)
{
	if (ft_strlen(str) < ft_strlen("2147483647"))
		return (1);
	else if (ft_strlen(str) > ft_strlen("2147483647"))
		return (0);
	if (ft_strcmp(str, "2147483647") > 0)
		return (0);
	return (1);
}

static int	check_duplicates(int len, int *num_arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (num_arr[i] == num_arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int			check_argv(int start, int len, char **argv)
{
	int	i;
	int	j;
	int	num[len - 1];

	i = start;
	while (i < len)
	{
		if (check_number(argv[i]) == 0)
			return (0);
		else if (check_range(argv[i]) == 0)
			return (0);
		j = (i == 0) ? i : i - 1;
		num[j] = ft_atoi(argv[i]);
		i++;
	}
	if (check_duplicates(len - 1, num) == 0)
		return (0);
	return (1);
}
