#include "s21_string.h"
#include <stdio.h>
#include <stdlib.h>

void s21_strlen_test(char *data_1, char *data_2, char *data_3)
{
    int res_1 = s21_strlen(data_1);
    if (res_1 == 13)
    {
        for (int i = 0; i < 13; i++)
        {
            printf("%c", data_1[i]);
        }
        printf("\n");
        printf("%d\n SUCCESS\n", res_1);
    }
    else
        printf("FAIL");
    printf("\n");
    int res_2 = s21_strlen(data_2);
    if (res_2 == 14)
    {
        for (int i = 0; i < 14; i++)
        {
            printf("%c", data_2[i]);
        }
        printf("\n");
        printf("%d\n SUCCESS\n", res_2);
    }
    else
    {
        for (int i = 0; i < 25; i++)
        {
            printf("%c", data_2[i]);
        }
        printf("%d\nFAIL\n", res_2);
        printf("\n");
    }
    int res_3 = s21_strlen(data_3);
    if (res_3 == 15)
    {
        for (int i = 0; i < 15; i++)
        {
            printf("%c", data_3[i]);
        }
        printf("\n");
        printf("%d\n SUCCESS\n", res_3);
    }
    else
        printf("FAIL\n");
    printf("\n");
}
void s21_strcmp_test(const char *cmp_1, const char *cmp_2, int p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", cmp_1[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c", cmp_2[i]);
    }
    printf("\n");
    int res = s21_strcmp(cmp_1, cmp_2);
    printf("%d\n", res);
    if (res == p)
    {
        printf("SUCCESS\n");
    }
    else
    {
        printf("FAIL");
        printf("\n");
    }
}
void s21_strcpy_test(const char *data, char *clone, char *ex_res, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", data[i]);
    }
    printf("\n");
    char *str = s21_strcpy(data, clone);
    for (int i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    if (!s21_strcmp(ex_res, str))
    {
        printf("SUCCESS\n");
    }
    else
    {
        printf("FAIL");
        printf("\n");
    }
}
void s21_strcat_test(char *data, char *des_data, char *exp_data, int n, int p, int s)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", data[i]);
    }
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        printf("%c", des_data[i]);
    }
    printf("\n");
    char *res_cat = s21_strcat(data, des_data);
    for (int i = 0; i < s; i++)
    {
        printf("%c", res_cat[i]);
    }
    printf("\n");
    if (!s21_strcmp(res_cat, exp_data))
    {
        printf("SUCCESS");
    }
    else
    {
        printf("FAIL");
    }
}
int main(void)
{
#ifdef STRLEN
    char *data_1 = "hello, verter";
    char *data_2 = "Привет,вертер";
    char *data_3 = " he11o, verter ";
    s21_strlen_test(data_1, data_2, data_3);
#endif
#ifdef STRCMP
    char *cmp_1;
    char *cmp_2;
    cmp_1 = "";
    cmp_2 = "Hello, verter";
    s21_strcmp_test(cmp_1, cmp_2, -1, 13);
    printf("\n");
    cmp_1 = "123";
    cmp_2 = "123";
    s21_strcmp_test(cmp_1, cmp_2, -2, 1);
    printf("\n");
    cmp_1 = "Verter";
    cmp_2 = "Verter";
    s21_strcmp_test(cmp_1, cmp_2, 0, 6);
    printf("\n");
#endif
#ifdef STRCPY
    char *data = "hello, verter";
    char clone[100];
    s21_strcpy_test(data, clone, "helo, verter", 13);
    printf("\n");
    data = " 1he110, verter22 ";
    s21_strcpy_test(data, clone, " 1he110, verter22 ", 18);
    printf("\n");
    data = "";
    s21_strcpy_test(data, clone, "", 1);
    printf("\n");
#endif
#ifdef STRCAT
    char *data;
    data = "hello, verter";
    char des_data[50] = "WOW";
    s21_strcat_test(data, des_data, "WOWhello, verter", 13, 3, 16);
    printf("\n");
    data = " ";
    s21_strcat_test(data, des_data, "WOWhello, verter ", 1, 16, 17);
    printf("\n");
    data = "1hello1";
    s21_strcat_test(data, des_data, "WOWhello, verter 1hello1", 7, 17, 24);
    printf("\n");
#endif
    return 0;
}