#include <stdio.h> 
#include <locale.h>

int main(void)
{
    //Задание 3
    setlocale(LC_ALL, "Rus");
    printf("Проверим результаты:\n\n\n");
    printf("INT\n\n");
    printf("Для переменных типа int - введите два значения:\n");
    int a, b, a1;
    scanf_s("%i", &a);
    scanf_s("%i", &b);
    a1 = a + b;
    printf("a+b = %d\n\n",a1);
    
    printf("UNSIGNED CHAR\n\n");
    printf("Для переменных типа unsigned char - введите два значения:\n");
    unsigned char c, d, c1;
    scanf_s("%hhu", &c);
    scanf_s("%hhu", &d);
    c1 = c - d;
    printf("c-d = %i\n\n", c1);
    
    printf("DOUBLE\n\n");
    printf("Для переменных типа double - введите два значения:\n");
    double e, f, e1;
    scanf_s("%lf", &e);
    scanf_s("%lf", &f);
    e1 = e + f;
    printf("e+f =  %lf\n\n", e1);
    
    printf("INT с выводом в виде числа с плавающей точкой\n\n");
    printf("Введём значение для переменной типа int: ");
    int g;
    scanf_s("%i", &g);
    printf("Результат: %f\n\n", g);

    printf("CHAR с выводом в виде символа\n\n");
    printf("Введём значение для переменной типа char: ");
    char h;
    scanf_s("%i", &h);
    printf("Результат: %c\n\n", h);
    
    system("pause");
    return(0);
}