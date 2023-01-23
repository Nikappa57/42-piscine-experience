/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcotza <dcotza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:55:53 by dcotza            #+#    #+#             */
/*   Updated: 2022/02/13 23:10:45 by alpelliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_constraint_lenght(char *string, int mat_lenght)
{
	int	lenght;
	int	c;

	c = 0;
	lenght = 0;
	while (*(string + c) != '\0')
	{
		if (c % 2 == 0)
		{
			if ((string[c] > '0') && (string[c] <= (mat_lenght + 48)))
				lenght++;
			else
				return (0);
		}
		c++;
	}	
	if (lenght != (mat_lenght * 4))
		return (0);
	return (lenght);
}

int	get_constraints(int argc, char *string, int mat_lenght, int **split)
{
	int	x;
	int	y;
	int	constraint_lenght;
	int	c;

	if (argc != 2)
		return (0);
	constraint_lenght = get_constraint_lenght(string, mat_lenght);
	if (!constraint_lenght)
		return (0);
	x = 0;
	y = 0;
	c = 0;
	while (*(string + c) != '\0')
	{
		if ((string[c] > '0') && (string[c] <= (mat_lenght + 48)))
		{
			split[y][x] = string[c] - 48;
			x++;
		}
		if (x == mat_lenght)
		{
			x = 0;
			y++;
		}
		c++;
	}
	return (1);
}
