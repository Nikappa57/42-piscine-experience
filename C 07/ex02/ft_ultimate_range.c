/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudino <lgaudino@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:40:12 by lgaudino          #+#    #+#             */
/*   Updated: 2022/02/22 18:54:43 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;
	int	len;

	len = max - min;
	result = (int *)malloc(len * sizeof(int));
	if (!result)
		return (0);
	i = 0;
	while (min + i < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*tmp;

	if (min >= max)
		return (0);
	len = max - min;
	tmp = ft_range(min, max);
	if (!tmp)
		return (0);
	range[0] = tmp;
	return (len);
}
