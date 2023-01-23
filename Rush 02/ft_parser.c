/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:08:52 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/19 20:46:18 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include "ft.h"

void	ft_get_key_end(char *str, int *key_end)
{
	int	i;

	i = 0;
	while (ft_isnumber(str[i]))
		i++;
	*key_end = i - 1;
}

void	ft_get_arg_start_end(char *str, int *arg_start, int *arg_end)
{
	int	i;

	i = 0;
	while (ft_isnumber(str[i]))
		i++;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == ':')
		i++;
	while (ft_isspace(str[i]))
		i++;
	*arg_start = i;
	while (ft_isprintable(str[i]))
		i++;
	*arg_end = i - 1;
}

char	**ft_get_element(char *str)
{
	int		key_end;
	int		arg_start;
	int		arg_end;
	char	**element;

	element = (char **)malloc(2 * sizeof(char *));
	ft_get_key_end(str, &key_end);
	ft_get_arg_start_end(str, &arg_start, &arg_end);
	element[0] = get_str(str, 0, key_end);
	element[1] = get_str(str, arg_start, arg_end);
	return (element);
}

int	ft_print_nbstr(char *key, char *dict_path)
{
	int		i;
	int		j;
	int		len;
	char	**element;
	char	*src;

	src = ft_read_file(dict_path);
	if (!src)
		return (ft_putstr("Dict Error\n"));
	len = ft_strlen(src);
	i = 0;
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i + j] != '\n' || i + j == len)
			j++;
		
		if (validate_str(get_str(src, i, i + j)))
		{
			element = ft_get_element(get_str(src, i, i + j));
			if (!ft_strcmp(fix_quadrillion(element[0]), key)
				&& (ft_strlen(fix_quadrillion(element[0])) == ft_strlen(key)))
				{
					ft_putstr(element[1]);
					ft_putchar(' ');
					free(element[0]);
					free(element[1]);
					free(element);
					return (0);
				}
			free(element[0]);
			free(element[1]);
			free(element);
		}
		if (i + j < len)
			i += j + 1;
		else
			break ;
	}
	
	return (0);
}
