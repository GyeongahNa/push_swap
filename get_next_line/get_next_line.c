/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:05:51 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:05:55 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_line(char **backup, char **line)
{
	char	*temp;
	char	*temp2;

	if ((temp = ft_strchr(*backup, '\n')))
	{
		*temp = 0;
		*line = ft_strdup(*backup);
		temp2 = ft_strdup(temp + 1);
		free(*backup);
		*backup = temp2;
		return (1);
	}
	return (0);
}

int	put_back(char **backup, int fd, char **line, char *buf)
{
	int		len;
	char	*temp;

	while ((len = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[len] = 0;
		temp = join_free(&backup[fd], buf);
		backup[fd] = temp;
		if ((find_line(&backup[fd], line) == 1))
		{
			free(buf);
			return (-2);
		}
	}
	free(buf);
	return (len);
}

int	process(char **backup, int fd, char **line, char *buf)
{
	int	len;

	len = put_back(backup, fd, line, buf);
	if (len == -2)
		return (1);
	if (len == 0)
	{
		*line = ft_strdup(backup[fd]);
		free(backup[fd]);
		backup[fd] = NULL;
		return (0);
	}
	*line = ft_strdup("");
	if (len == -1)
		return (-1);
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static	char	*backup[FD_COUNT];
	char			*buf;

	if (line == NULL || fd < 0 || fd > FD_COUNT || BUFFER_SIZE <= 0)
		return (-1);
	if (backup[fd] == NULL)
		backup[fd] = ft_strdup("");
	if (find_line(&backup[fd], line) == 1)
		return (1);
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	return (process(backup, fd, line, buf));
}
