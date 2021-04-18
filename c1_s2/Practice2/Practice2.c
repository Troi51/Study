//Практическая работа №2
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//18.04.2021

#include <stdio.h> 
#include <locale.h>
#include <math.h>
 
//С помощью данной функции мы каждый раз сможем находить f(x)
double f(double d_x, int i_k, int i_l, int i_m, int i_n)
{
    return(i_k * pow(d_x, 3) + i_l * pow(d_x, 2) + i_m * d_x + i_n);
}


int main(void)
{
    //Сообщаем компилятору, что хотим видеть в командной строке русские буквы вместо "крокозябр" 
    setlocale(LC_ALL, "Rus");
   



    system("pause");
    return(0);
}