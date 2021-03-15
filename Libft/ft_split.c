/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:57:01 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:05:01 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		split_cnt(int *arr, char const *s, char c)
{
	int i;
	int j;
	int split_cnt;

	arr[0] = -1;
	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			arr[j++] = i;
		i++;
	}
	arr[j] = ft_strlen(s);
	arr[j + 1] = -2;
	i = 0;
	split_cnt = 0;
	while (arr[i] != -2)
	{
		if (arr[i] + 1 < arr[i + 1])
			split_cnt++;
		i++;
	}
	return (split_cnt);
}

void	str_cnt(int *arr, int *str_len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (arr[i] != -2)
	{
		if (arr[i] + 1 < arr[i + 1])
		{
			str_len[j] = arr[i + 1] - arr[i];
			j++;
		}
		i++;
	}
}

void	fill_splited(int *arr, char **splited, char const *s)
{
	int i;
	int j;
	int m;
	int n;

	i = 0;
	m = 0;
	while (arr[i] != -2)
	{
		n = 0;
		j = arr[i] + 1;
		while (j < arr[i + 1])
		{
			splited[m][n] = s[j++];
			n++;
		}
		if (arr[i] + 1 < arr[i + 1])
		{
			splited[m][n] = '\0';
			m++;
			n = 0;
		}
		i++;
	}
	splited[m] = 0;
}

char	**ft_split(char const *s, char c)
{
	int		arr[1000];
	int		str_len[1000];
	char	**splited;
	int		i;

	if (s == 0)
		return ((char **)(0));
	if (!(splited = (char **)malloc(sizeof(char*) *
					(split_cnt(arr, s, c) + 1))))
		return ((char **)(0));
	str_cnt(arr, str_len);
	i = 0;
	while (i < split_cnt(arr, s, c))
	{
		if (!(splited[i] = (char *)malloc(sizeof(char) * (str_len[i] + 1))))
		{
			while (--i >= 0)
				free(splited[i]);
			free(splited);
			return ((char **)(0));
		}
		i++;
	}
	fill_splited(arr, splited, s);
	return (splited);
}
