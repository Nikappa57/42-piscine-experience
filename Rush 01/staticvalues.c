/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staticvalues.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:29:16 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/13 23:17:59 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_left_values(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	check = 0;
	while (i < n)
	{
		j = 0;
		if (mat_visible_box[i] == 1 || mat_visible_box[i] == n
			|| (mat[i][n - 1] == n && mat_visible_box[i] == 2))
			check = 1;
		if (mat_visible_box[i] == 1)
			mat[i][j] = n;
		else if (mat_visible_box[i] == n)
			while (j < n)
			{
				mat[i][j] = j + 1;
				j++;
			}
		else if (mat[i][n - 1] == n && mat_visible_box[i] == 2)
			mat[i][0] = n - 1;
		i++;
	}
	return (check);
}

int	row_right_values(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	check;

	check = 0;
	i = 0;
	while (i < n)
	{
		j = n - 1;
		if (mat_visible_box[i] == 1 || mat_visible_box[i] == n
			|| (mat[i][0] == n && mat_visible_box[i] == 2))
			check = 1;
		if (mat_visible_box[i] == 1)
			mat[i][j] = n;
		else if (mat_visible_box[i] == n)
			while (j > 0)
			{
				mat[i][j] = j + 1;
				j--;
			}
		else if (mat[i][0] == n && mat_visible_box[i] == 2)
			mat[i][n - 1] = n - 1;
		i++;
	}
	return (check);
}

int	col_up_values(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	check = 0;
	while (i < n)
	{
		j = 0;
		if (mat_visible_box[i] == 1 || mat_visible_box[i] == n
			|| (mat[n - 1][i] == n && mat_visible_box[i] == 2))
			check = 1;
		if (mat_visible_box[i] == 1)
			mat[j][i] = n;
		else if (mat_visible_box[i] == n)
			while (j < n)
			{
				mat[j][i] = j + 1;
				j++;
			}
		else if (mat[n - 1][i] == n && mat_visible_box[i] == 2)
			mat[0][i] = n - 1;
		i++;
	}
	return (check);
}

int	col_down_values(int **mat, int *mat_visible_box, int n)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	check = 0;
	while (i < n)
	{
		j = n - 1;
		if (mat_visible_box[i] == 1 || mat_visible_box[i] == n
			|| (mat[0][i] == n && mat_visible_box[i] == 2))
			check = 1;
		if (mat_visible_box[i] == 1)
			mat[j][i] = n;
		else if (mat_visible_box[i] == n)
			while (j > 0)
			{
				mat[j][i] = j + 1;
				j--;
			}
		else if (mat[0][i] == n && mat_visible_box[i] == 2)
			mat[n - 1][i] = n - 1;
		i++;
	}
	return (check);
}

int	static_values(int **mat, int **mat_visible_box, int n)
{
	return
		row_left_values(mat, mat_visible_box[0], n)
		+ row_right_values(mat, mat_visible_box[1], n)
		+ col_up_values(mat, mat_visible_box[2], n)
		+ col_down_values(mat, mat_visible_box[3], n);	
}
