/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:29:16 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/13 20:58:35 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	row_left(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	max;
	int	visible_box;

	i = 0;
	while (i < n)
	{
		j = 0;
		visible_box = 1;
		max = mat[i][0];
		while (j < n)
		{
			if (mat[i][j] > max)
			{
				max = mat[i][j];
				visible_box++;
			}
			j++;
		}
		if (visible_box != mat_visible_box[i])
			return (0);
		i++;
	}
	return (1);
}

int	row_right(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	max;
	int	visible_box;

	i = 0;
	while (i < n)
	{
		j = n - 1;
		visible_box = 1;
		max = mat[i][n - 1];
		while (j >= 0)
		{
			if (mat[i][j] > max)
			{
				max = mat[i][j];
				visible_box++;
			}
			j--;
		}
		if (visible_box != mat_visible_box[i])
			return (0);
		i++;
	}
	return (1);
}

int	col_up(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	max;
	int	visible_box;

	i = 0;
	while (i < n)
	{
		j = 0;
		visible_box = 1;
		max = mat[0][i];
		while (j < n)
		{
			if (mat[j][i] > max)
			{
				max = mat[j][i];
				visible_box++;
			}
			j++;
		}
		if (visible_box != mat_visible_box[i])
			return (0);
		i++;
	}
	return (1);
}

int	col_down(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	max;
	int	visible_box;

	i = 0;
	while (i < n)
	{
		j = n - 1;
		visible_box = 1;
		max = mat[n - 1][i];
		while (j >= 0)
		{
			if (mat[j][i] > max)
			{
				max = mat[j][i];
				visible_box++;
			}
			j--;
		}
		if (visible_box != mat_visible_box[i])
			return (0);
		i++;
	}
	return (1);
}

int	checks(int **mat, int **mat_visible_box, int n)
{
	if (row_left(mat, mat_visible_box[0], n)
		&& row_right(mat, mat_visible_box[1], n)
		&& col_up(mat, mat_visible_box[2], n)
		&& col_down(mat, mat_visible_box[3], n))
		return (1);
	return (0);
}
