/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:02:53 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/09 19:02:03 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check;

	check = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			check = 0;
		str++;
	}
	return (check);
}
