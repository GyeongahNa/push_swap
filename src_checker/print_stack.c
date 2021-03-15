/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:15:56 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:15:59 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	while (stack)
	{
		ft_puts(ft_itoa(stack->n));
		ft_puts(" ");
		stack = stack->next;
	}
	ft_puts("\n");
}

void	print_process(char *command, t_list *a, t_list *b)
{
	ft_puts("---------------------------\nExec ");
	ft_puts(command);
	ft_puts(":\n");
	ft_puts("a: ");
	print_stack(a);
	ft_puts("b: ");
	print_stack(b);
}
