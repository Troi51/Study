﻿//Практическая работа №2
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//18.04.2021

#include <stdio.h> 
#include <locale.h>
#include <math.h>
 
int i_k, i_l, i_m, i_n;    //Значения k, l, m, n, которые вводит пользователь с клавиатуры
int i_i = 0;               //Номер итерации, на которой был найден корень
double d_a, d_b,           //Левый и правый край интервала
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
    double d_xm;
    while (d_p < d_b - d_a) {
        i_i = i_i++;
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

int main(void)
{
    //Сообщаем компилятору, что хотим видеть в командной строке русские буквы вместо "крокозябр" 
    setlocale(LC_ALL, "Rus");
   
    printf("Введите значение левого края интервала:");
    scanf_s("%lf", &d_a);
    printf("Введите значение правого края интервала:");
    scanf_s("%lf", &d_b);
    d_p = 0.1;
    i_k = 1;
    i_l = 1;
    i_m = 1;
    i_n = 3;
    printf("Итог - %f", find_k());

    system("pause");
    return(0);
}