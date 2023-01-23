/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:15:06 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/19 18:49:47 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 2048

int	ft_file_l(char *path)
{
	int		len;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	len = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		len += ft_strlen(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (close(fd) == -1)
		return (0);
	return (len + 1);
}

char	*ft_read_file(char *path)
{
	int		ret;
	int		fd;
	char	*result;
	int		len;

	if (!path)
		path = "numbers.dict";
	len = ft_file_l(path);
	if (!len)
		return (0);
	result = (char *)malloc(sizeof(char) * len);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, result, len - 1);
	// while (ret)
	// {
	// 	ft_strcat(result, buf);
	// 	ret = read(fd, buf, BUF_SIZE);
	// }
	result[len] = '\0';
	if (close(fd) == -1)
		return (0);
	return (result);
}
