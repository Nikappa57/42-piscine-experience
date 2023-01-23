/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:02:17 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/13 23:19:17 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	checks(int **mat, int **mat_visible_box, int n);

int	static_values(int **mat, int **mat_visible_box, int n);

int	dynamic_values(int **mat, int **mat_visible_box, int n);

void	skrib(int **mat, int n);

int	get_constraints(int argc, char *string, int mat_lenght, int **split);

int	error(void);

int	main(int argc, char **argv)
{
	int	**mat;
	int	n;
	int	i;
	int	j;
	int	**mat_visible_box;

	n = 4;
	mat = (int **)malloc(n * sizeof(int *));
	i = 0;
	while (i < n)
	{
		mat[i] = malloc(n * sizeof(int));
		i++;
	}
	i = 0;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			mat[i][j] = 0;
			j++;
		}
		i++;
	}
		mat_visible_box = (int **)malloc(n * sizeof(int *));
	i = 0;
	while (i < n)
	{
		mat_visible_box[i] = malloc(n * sizeof(int));
		i++;
	}
	if (!get_constraints(argc, argv[1], n, mat_visible_box))
		return (error());
	static_values(mat, mat_visible_box, n);
	dynamic_values(mat, mat_visible_box, n);
/*	if (!checks(mat, mat_visible_box, n))
		return (error());*/
	skrib(mat, n);
	return (0);
}
