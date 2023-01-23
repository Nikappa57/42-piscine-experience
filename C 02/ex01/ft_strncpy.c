/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:14:14 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/15 19:21:08 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (*(src + i) && i < (int)n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < (int)n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
