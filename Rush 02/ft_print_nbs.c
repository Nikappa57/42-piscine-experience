#include "ft.h"

void ft_print_nbs(char *nb, char *dict_path)
{
    int     i;
    int     len;
	char	temp[2];

    len = ft_strlen(nb);
    i = 0;
    if (ft_strlen(nb) == 3)
    {
		temp[0] = nb[0];
		temp[1] = '\0';
		ft_print_nbstr(temp, dict_path);
		nb[0] = '1';
		ft_print_nbstr(nb, dict_path);
    }
    else
        ft_print_nbstr(nb, dict_path);
}