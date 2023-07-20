#include "s21_string.h"
#include <stdio.h>
#include <stdlib.h>
int s21_strlen(char *data)
{
    int res = 0;
    while (*data != '\0')
    {
        res++;
        data++;
    }
    return res;
}
int s21_strcmp(const char *cmp, const char *comp_cmp)
{
    int ret = -2;
    if (cmp != NULL && comp_cmp != NULL)
    {
        for (; *cmp && *cmp == *comp_cmp; cmp++, comp_cmp++)
        {
        }
        int res = *cmp - *comp_cmp;
        if (res > 0)
            ret = 1;
        else if (res < 0)
            ret = -1;
        else
            ret = 0;
    }
    return ret;
}
// char *s21_strcpy(const char *data, char *clon_data)
// {
//     if (data != NULL)
//     {
//         for (int i = 0; (clon_data[i] = data[i]) != '\0'; i++)
//         {
//         }
//     }
//     return clon_data;
// }
char *s21_strcpy( const char *source, char *destination) {
    char *ptr = destination;

    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
    return ptr;
}
char *s21_strcat(char *data, char *des_data)
{
    int p = 0;
    for (; des_data[p] != '\0'; p++)
    {
    }
    for (; *data; data++, p++)
    {
        des_data[p] = *data;
    }
    return des_data;
}