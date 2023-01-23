/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:02:53 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/09 18:15:21 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	check;

	check = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			check = 0;
		str++;
	}
	return (check);
}
