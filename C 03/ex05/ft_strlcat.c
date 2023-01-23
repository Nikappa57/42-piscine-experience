/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:54:04 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/15 17:33:09 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	dest_len;
	unsigned int	size_tmp;

	len = 0;
	dest_len = 0;
	size_tmp = size;
	while (*dest)
	{
		len++;
		dest++;
		dest_len++;
	}
	while (*src && len < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	if (size_tmp == 0 || dest_len > size_tmp)
		return (len);
	*dest = '\0';
	return (++len);
}
