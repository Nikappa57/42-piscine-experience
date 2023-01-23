/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmissoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:38:40 by dmissoni          #+#    #+#             */
/*   Updated: 2022/02/19 18:07:08 by lgaudino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_check_args(int argc, char **argv, char **path, char **value);

char	*ft_file_load(char *path);

int		ft_is_valid(char *value);

long	ft_atoi(char *str);

int		ft_isnumber(char c);

int		ft_isnumbers(char *str);

int		ft_isprintable(char c);

int		ft_isspace(char c);

void	ft_putchar(char c);

int		ft_putstr(char *str);

char	*fix_quadrillion(char *str);

int		ft_strlen(char *str);

void	divide_string(char *str, char *dict_path);

char	*ft_strn_cpy(char *dest, char *src, unsigned int n);

char	*ft_strcat(char *dest, char *src);

int		ft_strcmp(char *s1, char *s2);

int		validate_str(char *str);

char	*get_str(char *str, int start, int end);

char	*ft_read_file(char *path);

int     ft_print_nbstr(char *key, char *dict_path);

int		ft_file_l(char *path);

char	*get_str(char *str, int start, int end);

void    ft_print_nbs(char *nb, char *dict_path);

int str_is_zero(char *str);
#endif
