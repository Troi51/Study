#include <stdio.h> 
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("Введите количество строк массива:");
    scanf_s("%d", &a);
    printf("Введите количество столбцов массива:");
    scanf_s("%d", &b);
    system("pause");
    return(0);
}