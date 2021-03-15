/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:52:35 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 13:52:38 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*init(int *n, int *is_neg, int *len)
{
	char	*tmp;
	int		num;

	*is_neg = 0;
	if (*n < 0)
	{
		*is_neg = 1;
		*n *= -1;
	}
	*len = 0;
	num = *n;
	while (num > 0)
	{
		*len += 1;
		num /= 10;
	}
	if (*is_neg)
	{
		tmp = malloc(*len + 2);
		*len += 1;
	}
	else
		tmp = malloc(*len + 1);
	return (tmp);
}

static char	*is_zero(void)
{
	char *tmp;

	tmp = malloc(2);
	tmp[0] = '0';
	tmp[1] = 0;
	return (tmp);
}

static char	*is_overflow(void)
{
	char	*tmp;

	tmp = malloc(12);
	tmp[0] = '-';
	tmp[1] = '2';
	tmp[2] = '1';
	tmp[3] = '4';
	tmp[4] = '7';
	tmp[5] = '4';
	tmp[6] = '8';
	tmp[7] = '3';
	tmp[8] = '6';
	tmp[9] = '4';
	tmp[10] = '8';
	tmp[11] = 0;
	return (tmp);
}

char		*ft_itoa(int n)
{
	int		is_neg;
	char	*ans;
	int		len;

	if (n == 0)
		return (is_zero());
	if (n == -2147483648)
		return (is_overflow());
	ans = (char *)init(&n, &is_neg, &len);
	if (is_neg)
		ans[0] = '-';
	ans[len--] = 0;
	while (n > 0)
	{
		ans[len--] = n % 10 + '0';
		n /= 10;
	}
	return (ans);
}
