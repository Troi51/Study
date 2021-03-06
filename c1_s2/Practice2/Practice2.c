//Практическая работа №2
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//19.04.2021

#include <stdio.h> 
#include <locale.h>
#include <math.h>
 
int i_k, i_l, i_m, i_n;    //Значения k, l, m, n, которые вводит пользователь с клавиатуры 
int i_i = 1;               //Номер итерации, на которой был найден корень
double d_a, d_b,           //Левый и правый край интервала уравнения
       d_p;                //Точность нахождения решения уравнения

//С помощью данной функции мы каждый раз сможем находить f(x)
double f(double d_x)
{
    double r;
    r = (i_k * pow(d_x, 3) + i_l * pow(d_x, 2) + i_m * d_x + i_n);
    return(r);
}

//Вычисляем корень и находим количество итераций
double find_k()
{
    double d_xm = 0.0;
    while (d_p <= d_b - d_a) {
        i_i = i_i++;               //Считаем количество итераций
        d_xm = (d_a + d_b) / 2;
        if (f(d_b) * f(d_xm) < 0)
        {
            d_a = d_xm;
        }
        else
        {
            d_b = d_xm;
        }
    } 
    return(d_xm);
}

//Процедура на проверку введенных целочисленных значений пользователем. Процедурой было сделать проще,
//что бы каждый раз к каждой переменной не писать свою проверку
int enter_value(char c_x)
{
    int d_x = 0;
    printf("Введите значение переменной %c:", c_x);
    do {
        scanf_s("%d", &d_x);
        if (d_x < 1)
        {
            printf("Значение переменной должно быть натуральным числом! Повторите ввод:");
        }
    } while (d_x < 1);
    return(d_x);
}

int main(void)
{   
    //Сообщаем компилятору, что хотим видеть в командной строке русские буквы вместо "крокозябр" 
    setlocale(LC_ALL, "Rus");
    
    printf("Введите значение левого края интервала:");
    scanf_s("%lf", &d_a);
    printf("Введите значение правого края интервала:");
    scanf_s("%lf", &d_b);
    
    //Осуществляем проверку в соответствии с условиями поставленной задачи
    do {
        if ((d_a > d_b) | (d_a > 0) | (d_b < 0) | (d_b == d_a))
        {
            system("cls");
            printf("Введены неверные значения интервалов! Условия: a<b, a и b имеют разные знаки!\n");
            printf("Введите значение левого края интервала:");
            scanf_s("%lf", &d_a);
            printf("Введите значение правого края интервала:");
            scanf_s("%lf", &d_b);
        }
    } while ((d_a > d_b) | (d_a > 0) | (d_b < 0) | (d_b == d_a));
    
    printf("Введите значение точности нахождения решения уравнения:");
    scanf_s("%lf", &d_p);
    d_p = d_p * 2;

    i_k = enter_value('k');
    i_l = enter_value('l');
    i_m = enter_value('m');
    i_n = enter_value('n');

    printf("\nРезультаты вычислений\n"); 
    printf("Корень уравнения: %f\n", find_k());
    printf("Количество итераций: %d\n", i_i);
    printf("Критерий остановки расчётов: %f\n", d_p);

    return(0);
}