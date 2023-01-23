/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:02:53 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/14 15:36:43 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	check;

	check = 1;
	while (*str)
	{
		if (!(*str > 31 && *str <= 127))
			check = 0;
		str++;
	}
	return (check);
}
