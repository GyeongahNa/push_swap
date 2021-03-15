/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:06:34 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:06:36 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_gnlstrlen(char *str)
{
	size_t	size;

	if (str == NULL)
		return (0);
	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	size1;
	size_t	size2;
	size_t	i;
	char	*result;

	size1 = ft_gnlstrlen(str1);
	size2 = ft_gnlstrlen(str2);
	if (!(result = (char *)malloc(sizeof(char) * (size1 + size2 + 1))))
		return (0);
	result[size1 + size2] = 0;
	i = 0;
	while (i < size1)
	{
		result[i] = str1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		result[size1 + i] = str2[i];
		i++;
	}
	return (result);
}

char	*ft_strdup(char *str)
{
	char	*result;
	size_t	size;
	size_t	i;

	size = ft_gnlstrlen(str);
	if (!(result = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	result[size] = 0;
	i = 0;
	while (i < size)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}

char	*ft_strchr(char *str, char ch)
{
	while (*str)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (0);
}

char	*join_free(char **dest, char *src)
{
	char		*temp;

	temp = ft_strjoin(*dest, src);
	free(*dest);
	*dest = NULL;
	return (temp);
}
