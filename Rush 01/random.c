/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:36:49 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/13 22:55:46 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	result_len(int *mat, int n)
{
	int	i;
	int	j;
	int	check;
	int	n_r;
	int	*all;

	i = 0;
	all = malloc(n * sizeof(int));
	n_r = 0;
	while (i < n)
	{
		all[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		check = 0;
		while (j < 0)
		{
			if (mat[j] == all[i])
			{
				check = 1;
				break ;
			}
			j++;
		}
		if (!check)
		{
			n_r++;
		}
		i++;
	}
	return (n_r);
}

void	possibility(int *mat, int n, int *result)
{
	int	i;
	int	j;
	int	*all;
	int	check;
	int	n_r;

	i = 0;
		i = 0;
	while (i < n)
	{
		j = 0;
		check = 0;
		while (j < 0)
		{
			if (mat[j] == all[i])
			{
				check = 1;
				break ;
			}
			j++;
		}
		if (!check)
		{
			result[n_r] = all[i];
			n_r++;
		}
		i++;
	}
	free(all);
}

void	randomi_num(int **mat, int n)
{
	int	i;
	int	k;
	int	j;
	int	*numbers;
	int	r_len;

	i = 0;
	while (i < n)
	{
		j = 0;
		k = 0;
		r_len = result_len(mat[i], n);
		numbers = malloc(r_len * sizeof(int));
		possibility(mat[i], n, numbers);
		while (j < n)
		{
			if (!mat[i][j])
			{		
			}
			j++;
		}
		i++;
	}
}
