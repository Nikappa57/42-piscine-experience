/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:20:36 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/15 17:31:06 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	check;

	if (!*to_find)
		return (str);
	while (*str)
	{
		j = 0;
		check = 1;
		if (*str == *to_find)
		{
			while (*(to_find + j) != '\0')
			{
				if (*(to_find + j) != *(str + j))
					check = 0;
				j++;
			}
			if (check)
				return (str);
		}
	str++;
	}
	return (0);
}
