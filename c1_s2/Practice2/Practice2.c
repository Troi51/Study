//Практическая работа №2
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//18.04.2021

#include <stdio.h> 
#include <locale.h>
#include <math.h>
 
int i_k, i_l, i_m, i_n;
double d_a, d_b, d_sigma;

//С помощью данной функции мы каждый раз сможем находить f(x)
double f(double d_x, int i_k, int i_l, int i_m, int i_n)
{
    double r;
    r = (i_k * pow(d_x, 3) + i_l * pow(d_x, 2) + i_m * d_x + i_n);
    return(r);
}


double find_k()
{
    double d_xm, d_fxm;
    
    do {
        d_xm = (d_a + d_b) / 2;
        d_fxm = f(d_xm, i_k, i_l, i_m, i_n);
        if (d_fxm <= 0)
        {
            d_b = d_xm;
        }
        else
        {
            d_a = d_xm;
        }
    } while (d_b - d_a > d_sigma);
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
    d_sigma = 0.01;
    i_k = 1;
    i_l = 1;
    i_m = 1;
    i_n = 1;
    printf("Итог - %f", find_k());

    system("pause");
    return(0);
}