#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "lib.h"

void input_n(int n)
{
    //...
}
void input_str_arr(char arr[][MAXLENGTH], int n)
{
    long int length=0;
    printf("Введите массив строк:\n");
    for (int i=0; i<n; i++) {
        fgets(arr[i], MAXLENGTH, stdin);
        length = strlen(arr[i]);
    }
}
void delete_str_arr(char arr[][MAXLENGTH], int n)
{
    //...
}
void output_str_arr(const char arr[][MAXLENGTH], int n)
{
    printf("\nВывод:\n");
    for (int i=0; i<n; i++) {
        printf("%s", arr[i]);
    }
}
