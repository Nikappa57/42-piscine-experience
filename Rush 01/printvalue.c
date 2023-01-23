/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printvalue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpelliz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:52:32 by alpelliz          #+#    #+#             */
/*   Updated: 2022/02/13 17:12:48 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	skrib(int **mat, int n)
{
	int	xlin;
	int	ykol;

	xlin = 0;
	ykol = 0;
	while (ykol < n)
	{
		xlin = 0;
		while (xlin < n)
		{
			print(mat[ykol][xlin] + 48);
			print(' ');
			xlin++;
		}
		print('\n');
		ykol++;
	}
}
