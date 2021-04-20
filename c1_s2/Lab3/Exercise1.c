//Лабораторная работа №3
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//20.04.2021

#include <stdio.h> 
#include <locale.h>
#include <math.h>

long int i_a, i_b, i_c, i_check = 0;

int main(void)
{   
    //Сообщаем компилятору, что хотим видеть в командной строке русские буквы вместо "крокозябр" 
    setlocale(LC_ALL, "Rus");
    printf("Программа, реализующая поиск корней квадратного уравнения a*x^2+b*x+c=0\n");
    printf("Введите значение коэффицента а:");
    scanf_s("%ld", &i_a);
    if (i_a != 0)
    {
        i_check = i_check + 1;
    }
    printf("Введите значение коэффицента b:");
    scanf_s("%ld", &i_b);
    if (i_b != 0)
    {
        i_check = i_check + 3;
    }
    printf("Введите значение коэффицента c:");
    scanf_s("%ld", &i_c);
    if (i_c != 0)
    {
        i_check = i_check + 5;
    }
    //printf("%d:", i_check);

    switch(i_check)
    {

    //a, b, c = 0
    case 0:
     {
        printf("\n\nВведено пустое уравнение (%d)*x^2+(%d)*x+(%d)=0, т.к. коэффицент равны нулю!", i_a, i_b, i_c);
        break;
     }

    //a, b = 0  c <> 0
    case 5:
     {
        printf("\n\nВведено линейное уравнение (%d)*x^2+(%d)*x+(%d)=0. Уравнение не имеет корней!", i_a, i_b, i_c);
        break;
     }
    //a<>0 b,c = 0
    case 1:
     {
        printf("\n\nВведено квадратное уравнение (%d)*x^2+(%d)*x+(%d)=0\n", i_a, i_b, i_c);
        printf("Результат умножения: %d*x^2=0\n", i_a);
        printf("Корень уравнения равен: 0\n");
        break;
     }
    // a<>0, b = 0, c <> 0
    case 6:
     {
        printf("\n\nВведено квадратное уравнение (%d)*x^2+(%d)*x+(%d)=0\n", i_a, i_b, i_c);
        double f_x1, f_x2;
        int i_disc;
        i_disc = -1 * (4 * i_a * i_c);
        if (i_disc > -1)
        {
            f_x1 = -1 * (sqrt(i_disc)/2*i_a);
            f_x2 = sqrt(i_disc) / 2 * i_a;
            printf("Корни квадратного уравнения: %f, %f\n", f_x1, f_x2);
        }
        else
        {

        }
     }
        break;
    case 4:
        printf("Квадратное уравнение без с");
        break;
    case 9:
        printf("Стандарное квадртаное уравнение");
        break;
    default:
        printf("Уравнение не соответствует условию задачи");
        break;

    }

    return(0);
}