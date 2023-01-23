/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:02:15 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/15 19:20:32 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print(char a)
{
	write(1, &a, 1);
}

int	ft_is_printable(char c)
{
	if (!(c > 31 && c <= 127))
		return (0);
	return (1);
}

void	ft_to_hex(int nb, int i)
{
	char	*base;

	base = "0123456789abcdef";
	if (!(nb % 16) && !(nb / 16) && !i)
		print('0');
	if (nb / 16 || nb % 16)
		ft_to_hex(nb / 16, ++i);
	print(base[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (ft_is_printable(*(str + i)))
			print(*(str + i));
		else
		{
			print('\\');
			ft_to_hex(*(str + i), 0);
		}
		i++;
	}
}
