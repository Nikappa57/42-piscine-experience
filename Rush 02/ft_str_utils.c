/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:30:57 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/20 10:31:00 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

int	validate_str(char *str)
{
	int	check[3];

	check[0] = 0;
	check[1] = 0;
	check[2] = 0;
	while (ft_isnumber(*str))
	{
		str++;
		check[0] = 1;
	}
	while (ft_isspace(*str))
		str++;
	if (*str == ':')
		check[1] = 1;
	str++;
	while (ft_isspace(*str))
		str++;
	while (ft_isprintable(*str) && *str != '\n' && *str != '\0')
	{
		check[2] = 1;
		str++;
	}
	return ((*str == '\n' || *str == '\0') && check[0] && check[1] && check[2]);
}

char	*get_str(char *str, int start, int end)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc((sizeof(char) * (end - start)) + 1);
	i = 0;
	while (i <= end - start)
	{
		tmp[i] = str[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
