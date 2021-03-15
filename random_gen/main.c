/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:12:41 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 16:15:51 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int	num_arr[1024];
	int	j;
	int	tmp;

	srand((unsigned int)time(NULL));
	argc = 0;
	while (argc < ft_atoi(argv[1]))
	{
		tmp = rand() % ft_atoi(argv[1]) + 1;
		j = 0;
		while (j < argc)
		{
			if (num_arr[j] == tmp)
				break ;
			j++;
		}
		if (j == argc)
		{
			num_arr[argc] = tmp;
			ft_puts(ft_itoa(tmp));
			ft_puts(" ");
			argc++;
		}
	}
}
