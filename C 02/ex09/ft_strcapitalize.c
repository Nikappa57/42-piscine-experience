/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:02:53 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/15 17:22:50 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		check;
	char	*dest;

	check = 1;
	dest = str;
	while (*str)
	{
		if (check)
		{
			if (*str >= 97 && *str <= 122)
				*str -= 32;
			check = 0;
		}
		else if (*str >= 65 && *str <= 90)
		{
			*str += 32;
		}
		if (!(*str >= 97 && *str <= 122) && !(*str >= 65 && *str <= 90)
			&& !(*str >= 48 && *str <= 57))
			check = 1;
		str++;
	}
	return (dest);
}
