/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:14:11 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:14:18 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		call_s(char *command, t_list **a_start, t_list **b_start)
{
	if (ft_strcmp(command, "sa") == 0)
		sa(a_start);
	else if (ft_strcmp(command, "sb") == 0)
		sb(b_start);
	else if (ft_strcmp(command, "ss") == 0)
		ss(a_start, b_start);
	else
		return (0);
	return (1);
}

static int		call_p(char *command, t_list **a_start, t_list **b_start)
{
	if (ft_strcmp(command, "pa") == 0)
		pa(a_start, b_start);
	else if (ft_strcmp(command, "pb") == 0)
		pb(a_start, b_start);
	else
		return (0);
	return (1);
}

static int		call_r(char *command, t_list **a_start, t_list **b_start)
{
	if (ft_strcmp(command, "ra") == 0)
		ra(a_start);
	else if (ft_strcmp(command, "rb") == 0)
		rb(b_start);
	else if (ft_strcmp(command, "rr") == 0)
		rr(a_start, b_start);
	else if (ft_strcmp(command, "rra") == 0)
		rra(a_start);
	else if (ft_strcmp(command, "rrb") == 0)
		rrb(b_start);
	else if (ft_strcmp(command, "rrr") == 0)
		rrr(a_start, b_start);
	else
		return (0);
	return (1);
}

int				check_command(char *command, t_list **a_start, t_list **b_start)
{
	if (!call_s(command, a_start, b_start) &&
		!call_p(command, a_start, b_start) &&
		!call_r(command, a_start, b_start))
	{
		free(command);
		return (0);
	}
	return (1);
}

int				call_command(t_list **a_start, t_list **b_start)
{
	char	*command;

	command = malloc(sizeof(char) * 256);
	while (get_next_line(0, &command))
		if (check_command(command, a_start, b_start) == 0)
			return (0);
	if (command[0] != 0 && check_command(command, a_start, b_start) == 0)
		return (0);
	free(command);
	return (1);
}
