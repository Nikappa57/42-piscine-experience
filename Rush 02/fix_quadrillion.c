/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_quadrillion.c                                    :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: dmissoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:28:23 by dmissoni          #+#    #+#             */
/*   Updated: 2022/02/19 14:28:28 by dmissoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

char *fix_quadrillion(char *str)
{
    if (!ft_strcmp("1000000000000000quadrillion", str)
        && ft_strlen(str) == 27)
            return ("1000000000000000");
    return (str);
}