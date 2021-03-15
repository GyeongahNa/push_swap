/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_commands.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:47:17 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:47:20 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_cmd_num(int cmd, t_list *cmd_lst)
{
	int num;

	num = 0;
	while (cmd_lst->n != PB && cmd_lst->n != PA)
	{
		if (cmd_lst->n == cmd)
			num++;
		cmd_lst = cmd_lst->next;
	}
	return (num);
}

void	iterate_prints(int cnt, char *str)
{
	int i;

	i = 0;
	while (i < cnt)
	{
		ft_puts(str);
		i++;
	}
}

void	print_r_command(int cnt_ra, int cnt_rb, int cnt_rra, int cnt_rrb)
{
	int	cnt_rr;
	int	cnt_rrr;

	cnt_rr = (cnt_ra > cnt_rb) ? cnt_rb : cnt_ra;
	cnt_rrr = (cnt_rra > cnt_rrb) ? cnt_rrb : cnt_rra;
	cnt_ra = cnt_ra - cnt_rr;
	cnt_rb = cnt_rb - cnt_rr;
	cnt_rra = cnt_rra - cnt_rrr;
	cnt_rrb = cnt_rrb - cnt_rrr;
	iterate_prints(cnt_ra, "ra\n");
	iterate_prints(cnt_rb, "rb\n");
	iterate_prints(cnt_rra, "rra\n");
	iterate_prints(cnt_rrb, "rrb\n");
	iterate_prints(cnt_rr, "rr\n");
	iterate_prints(cnt_rrr, "rrr\n");
}

void	print_rest_command(t_list *cmd_lst)
{
	while (cmd_lst)
	{
		if (cmd_lst->n == PA)
			ft_puts("pa\n");
		else if (cmd_lst->n == RRB)
			ft_puts("rrb\n");
		cmd_lst = cmd_lst->next;
	}
}

void	print_total_command(t_list *cmd_lst)
{
	int	cnt_ra;
	int	cnt_rb;
	int	cnt_rra;
	int	cnt_rrb;

	while (cmd_lst->n != PA)
	{
		cnt_ra = get_cmd_num(RA, cmd_lst);
		cnt_rb = get_cmd_num(RB, cmd_lst);
		cnt_rra = get_cmd_num(RRA, cmd_lst);
		cnt_rrb = get_cmd_num(RRB, cmd_lst);
		print_r_command(cnt_ra, cnt_rb, cnt_rra, cnt_rrb);
		while (cmd_lst->n != PB && cmd_lst->n != PA)
			cmd_lst = cmd_lst->next;
		if (cmd_lst->n == PB)
		{
			ft_puts("pb\n");
			cmd_lst = cmd_lst->next;
		}
	}
	print_rest_command(cmd_lst);
}
