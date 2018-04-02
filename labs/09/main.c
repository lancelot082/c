#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"

int main(void) {
    int n; // количество вводимых строк
    char arr[MAXWORDS][MAXLENGTH]; // массив строк
    
    // ввод количество строк
    printf("Введите количесво строк (от 0 до 20):\n");
    scanf("%d", &n);
    getchar();
    
    // ввод строк
    input_str(arr, n);
    
    // Вариант 17. удаление из каждой строки ее предпоследнее слово
    variant_29(arr, n);
    
    // вывод строк
    output_str(arr, n);
    
    return 0;
}
