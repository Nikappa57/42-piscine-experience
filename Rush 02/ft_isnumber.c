/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmissoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:09:50 by dmissoni          #+#    #+#             */
/*   Updated: 2022/02/19 19:20:30 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumber(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isnumbers(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isnumber(str[i]))
			return (0);
		else
			i++;
	}
	return (1);
}
