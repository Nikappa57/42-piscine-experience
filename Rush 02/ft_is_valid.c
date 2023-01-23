/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmissoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:45:15 by dmissoni          #+#    #+#             */
/*   Updated: 2022/02/19 16:45:48 by dmissoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid(char *value)
{
	int	n;
	int	i;

	if (!*value)
		return (0);
	n = 0;
	i = -1;
	while (value[++i])
	{
		if (value[i] < '0' || value[i] > '9')
			return (0);
		else if (n || value[i] != '0')
			n++;
	}
	return (n <= 12);
}