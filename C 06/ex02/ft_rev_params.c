/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:50:01 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/17 19:45:03 by lgaudino         ###   ########.fr       */
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
}

void	ft_rev_int_tab(char **tab, int size)
{
	char	*tmp;
	int		i;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_rev_int_tab(argv, argc);
	while (i < argc - 1)
	{
		ft_putstr(argv[i++]);
		print('\n');
	}
}
