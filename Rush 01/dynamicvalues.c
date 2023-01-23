/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamicvalues.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:29:16 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/13 22:59:18 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_values(int **mat, int *mat_visible_box_left,
	int *mat_visible_box_right, int n)
{
	int	i;
	int	x;
	int	y;
	int	check;

	i = 0;
	check = 0;
	while (i < n)
	{
		x = mat_visible_box_left[i] - 1;
		y = n - mat_visible_box_right[i];
		if (x == y && mat[i][x] != n)
		{
			mat[i][x] = n;
			check = 1;
		}
		i++;
	}
	return (check);
}

int	col_values(int **mat, int *mat_visible_box_up,
	int *mat_visible_box_down, int n)
{
	int	i;
	int	x;
	int	y;
	int	check;

	i = 0;
	check = 0;
	while (i < n)
	{
		x = mat_visible_box_up[i] - 1;
		y = n - mat_visible_box_down[i];
		if (x == y && mat[x][i] != n)
		{
			mat[x][i] = n;
			check = 1;
		}
		i++;
	}
	return (check);
}

int	dynamic_values(int **mat, int **mat_visible_box, int n)
{
	return
		(row_values(mat, mat_visible_box[0], mat_visible_box[1], n)
		+ col_values(mat, mat_visible_box[2], mat_visible_box[3], n));
}
