/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:50:01 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/21 14:45:05 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		print(*(str + i));
		i++;
	}
	print('\n');
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putstr(argv[0]);
}
