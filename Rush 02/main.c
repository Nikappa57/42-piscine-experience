/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:12:38 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/20 11:12:41 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*nb;
	char	*dict_path;
	char	*file_str;

	dict_path = 0;
	if (argc > 3 || argc < 2)
		return (ft_putstr("Error\n"));
	if (argc == 2)
		nb = argv[1];
	else if (argc == 3)
	{
		dict_path = argv[1];
		nb = argv[2];
	}

	if (!ft_isnumbers(nb))
		return (ft_putstr("Error\n"));
	if (str_is_zero(nb))
		ft_print_nbs("0", dict_path);
	else
		divide_string(nb, dict_path);

	return (0);
}