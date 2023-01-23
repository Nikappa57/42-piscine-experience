/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:24:36 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/23 16:37:47 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	strln(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
		len += strln(strs[i++]);
	return (len + ((size - 1) * strln(sep)) + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	if (size == 0)
	{
		result = malloc(1 * sizeof(char));
		result [0] = '\0';
	}
	else
	{
		i = 0;
		result = (char *)malloc(get_len(size, strs, sep) * sizeof(char));
		if (!result)
			return (0);
		result[0] = '\0';
		while (i < size - 1)
		{
			result = ft_strcat(result, strs[i]);
			result = ft_strcat(result, sep);
			i++;
		}
		result = ft_strcat(result, strs[size - 1]);
	}
	return (result);
}
