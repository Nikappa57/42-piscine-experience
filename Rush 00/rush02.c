/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:19:25 by asantoro          #+#    #+#             */
/*   Updated: 2022/02/06 16:19:29 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	xa;
	int	yb;

	yb = y;
	while (yb > 0 && x > 0)
	{
		xa = x;
		while (xa > 0)
		{
			if ((xa == 1 && yb == 1 && y > 1) || (xa == x && yb == 1 && y > 1))
				ft_putchar('C');
			else if ((xa == 1 && yb == y) || (xa == x && yb == y))
				ft_putchar('A');
			else if ((xa == 1) || (xa == x) || (yb == 1) || (yb == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			xa--;
		}
		yb--;
		ft_putchar('\n');
	}
}
