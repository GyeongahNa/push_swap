/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:46:01 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:52:43 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_argv(char **argv)
{
	int i;

	i = 0;
	while (argv[i] != 0)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	return ;
}

int		check_input_form(int argc, char *str)
{
	int	i;
	int	is_space;

	i = 0;
	is_space = 0;
	if (argc != 2)
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != ' ')
			return (0);
		if (str[i] == ' ')
			is_space = 1;
		i++;
	}
	if (is_space == 0)
		return (0);
	return (1);
}

int		get_argv_size(char **argv)
{
	int i;

	i = 0;
	while (argv[i] != 0)
		i++;
	return (i);
}

int		check_input(t_list **a, char **argv, int argc, int i)
{
	if (check_argv(i, argc, argv) == 0)
	{
		ft_puts("Error\n");
		return (0);
	}
	while (i < argc)
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_list	*cmd;
	int		i;

	a = NULL;
	b = NULL;
	if (argc <= 1)
		return (0);
	i = 1;
	if (check_input_form(argc, argv[1]) == 1)
	{
		argv = ft_split(argv[1], ' ');
		argc = get_argv_size(argv);
		i = 0;
	}
	if (check_input(&a, argv, argc, i) == 0)
		return (0);
	cmd = NULL;
	if (check_descending(a, b) == 1)
		return (0);
	if (check_little_number(i, argc, argv))
		return (0);
	push_swap(&cmd, argc, a, b);
	print_total_command(cmd);
}
