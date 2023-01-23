/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:24:27 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/08 19:25:12 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	print_v(int vet[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		print(vet[i] + '0');
		i++;
	}
}

void	fill_v(int vet[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		vet[i] = i;
		i++;
	}
}

bool	src(int vet[], int n, int i)
{
	int	j;

	if (vet[i] >= 10 - n + i && vet[i - 1] < vet[i] - 1)
	{
		vet[i -1]++;
		j = i;
		while (j < n)
		{
			vet[j] = vet[j - 1] + 1;
			j++;
		}
		return (true);
	}
	else if (vet[i] > 0 && vet[i] < 10 - n + i)
	{
		vet[i]++;
		return (true);
	}
	return (false);
}

void	ft_print_combn(int n)
{
	int	vet[9];
	int	i;

	fill_v(vet, n);
	print_v(vet, n);
	write(1, ", ", 2);
	while (vet[0] != 10 - n || vet[n - 1] != 9)
	{
		i = n - 1;
		while (i >= 0)
		{
			if (src(vet, n, i))
				break ;
			i--;
		}
		print_v(vet, n);
		if (vet[0] != 10 - n || vet[n - 1] != 9)
			write(1, ", ", 2);
	}
}
