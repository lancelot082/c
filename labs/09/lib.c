#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

/**
 *  Ввод строк
 */
void input_str(char arr[][MAXLENGTH], int n)
{
    printf("Введите %d строк:\n", n);
    for (int i=0; i<n; i++) {
        fgets(arr[i], MAXLENGTH, stdin);
    }
}
/**
 *  Удаление всех нечетных слов в строке
 */
void delete_not_even_words(char *arr, char buffer[][20], int c)
{
    // Деление стоки на лексем
    char *pch = strtok(arr, " ");
    while(pch != NULL) {
        strcpy(buffer[c], pch);
        pch = strtok(NULL, " ");
        c++;
    }
    strcpy(arr, "\0");    // обнуление строки
    
    // Удаление все нечетные слова в строке
    for (int i=0; i<c; i++) {
        if ((i+1) % 2 == 0) {
            strcat(arr, buffer[i]);   // проверка, слово является ли предпоследной, если да, то пропускать
            if ((i != c-2) && (i != c-1)) strcat(arr, " ");   // проверка, слово является ли последной, если да, то не ставить пробел
        } else {
            if (i == c-1) strcat(arr, "\n");
        }
    }
    // Обнуление буфера (без этого не получается, в стеке остается данные с прошлого цикла)
    for (int e=0; e<20; e++) {
        for (int k=0; k<20; k++) {
            buffer[e][k] = '\0';
        }
    }
}
/**
 *  Вариант 29. Удаление предпоследнее слово в каждой строке
 */
void variant_29(char arr[][MAXLENGTH], int n)
{
    char buffer[MAXWORDS][20];  // временное хранение слов
    int c=0;                    // счетчик слов
    for (int i=0; i<n; i++) {
        delete_not_even_words(arr[i], buffer, c);
    }
}
/**
 *  Вывод всех строк
 */
void output_str(char arr[][MAXLENGTH], int n)
{
    printf("\nВывод:\n");
    for (int i=0; i<n; i++) {
        printf("%s", arr[i]);
    }
}
