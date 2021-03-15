/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gna <gna@student.42Seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:06:10 by gna               #+#    #+#             */
/*   Updated: 2021/03/15 14:06:12 by gna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define FD_COUNT 256
# define BUFFER_SIZE 256
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
size_t	ft_gnlstrlen(char *str);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strdup(char *str);
char	*ft_strchr(char *str, char ch);
int		find_process(char **backup, char **line);
int		process(char **backup, int fd, char **line, char *buf);
char	*join_free(char **dest, char *src);
int		put_back(char **backup, int fd, char **line, char *buf);

#endif
