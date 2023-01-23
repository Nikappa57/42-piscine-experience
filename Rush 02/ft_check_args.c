/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmissoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:28:23 by dmissoni          #+#    #+#             */
/*   Updated: 2022/02/19 14:28:28 by dmissoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_check_args(int argc, char **argv, char **path, char **value)
{
	if (argc < 2 || argc > 3)
	{
		*path = NULL;
		*value = NULL;
	}
	if (argc == 2)
	{
		*path = "numbers.dict";
		*value = argv[1];
	}
	else
	{
		*path = argv[1];
		*value = argv[2];
	}
}
