#include "ft.h"
#include <stdlib.h>

int str_is_zero(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '0')
            return (0);
        i++;
    }
    return (1);
}

char *associate_base_ten(int distance)
{
    char *str = malloc(distance + 2);
    int i;

    i = 1;
    str[0] = '1';
    while (i < distance + 1)
    {
        str[i] = '0';
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *associate_three(int distance, char c)
{
    char *str = malloc(distance + 2);
    int i;

    i = 1;
    str[0] = c;
    while (i < distance + 1)
    {
        str[i] = '0';
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *unite_two(char c1, char c2)
{
    char *str;

    str = malloc(3);
    str[0] = c1;
    str[1] = c2;
    str[2] = '\0';
    return (str);
}

void    subdivide(char *str, char *dict_path)
{
    int distance;
    int i;

    i = 0;
    distance = ft_strlen(str) - 1;
    while (str[i] != '\0')
    {
        if (i == 1 && str[i] == '1')
        {
            if (!str_is_zero(unite_two(str[i], str[i + 1])))
                ft_print_nbs(unite_two(str[i], str[i + 1]), dict_path);
            break;
        }
        else
        {
            if (!str_is_zero((associate_three(distance, str[i]))))
                ft_print_nbs(associate_three(distance, str[i]), dict_path);          
        }

        i++;
        distance--;
    }
}


void    divide_string(char *str, char *dict_path)
{
    char *temp;
    int i;
    int j;
    int distance;

    i = 0;
    if (ft_strlen(str) % 3 == 0)
    {
        while (str[i] != '\0')
        {
            j = 0;
            temp = malloc(4);
            while (j < 3)
            {
                temp[j] = str[j + i];
                j++;
            }
            temp[j] = '\0';
            i += 3;
            distance = ft_strlen(str) - i;
            subdivide(temp, dict_path);
            if (distance != 0 && ft_strcmp("000", temp))
                ft_print_nbs(associate_base_ten(distance), dict_path);
        }
    }
    if (ft_strlen(str) % 3 == 1)
    {
        temp = malloc(2);
        temp[0] = str[0];
        temp[1] = '\0';
        str++;
        distance = ft_strlen(str);
        subdivide(temp, dict_path);
        if (distance != 0)
            ft_print_nbs(associate_base_ten(distance), dict_path);
        divide_string(str, dict_path);
    }
    if (ft_strlen(str) % 3 == 2)
    {
        temp = malloc(3);
        if (i == 0 && str[i] == '1')
        {
            if (!str_is_zero(unite_two(str[i], str[i + 1])))
                ft_print_nbs(unite_two(str[i], str[i + 1]), dict_path);
            distance = ft_strlen(str + 2);
            if (distance != 0)
                ft_print_nbs(associate_base_ten(distance), dict_path); 
        }
        else
        {
            temp[0] = str[0];
            temp[1] = str[1];
            temp[2] = '\0';
            distance = ft_strlen(str + 2);
            subdivide(temp, dict_path);
            if (distance != 0)
                ft_print_nbs(associate_base_ten(distance), dict_path);
        }
        str += 2;
        divide_string(str, dict_path);
    }
}