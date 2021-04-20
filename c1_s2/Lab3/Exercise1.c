//Лабораторная работа №3
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//20.04.2021

#include <stdio.h> 
#include <locale.h>
#include <math.h>

int i_a, i_b, i_c;
char c_check[6];

int check_value(int i_x, char c_x, int i_a, int i_b)
{
    if (i_x == 0)
    {
        c_check[i_a] = c_x;
        c_check[i_b] = ' ';
    }
    else
    {
        c_check[i_a] = ' ';
        c_check[i_b] = ' ';
    }
}


int main(void)
{   
    //Сообщаем компилятору, что хотим видеть в командной строке русские буквы вместо "крокозябр" 
    setlocale(LC_ALL, "Rus");
    
    printf("Введите значение коэффицента а:");
    scanf_s("%ld", &i_a);
    if (i_a == 0)
    {
        c_check[0] = 'a';
        c_check[1] = ' ';
    }
    else
    {
        c_check[0] = ' ';
        c_check[1] = ' ';
    }
    printf("Введите значение коэффицента b:");
    scanf_s("%ld", &i_b);
    if (i_b == 0)
    {
        c_check[2] = 'b';
        c_check[3] = ' ';
    }
    else
    {
        c_check[2] = ' ';
        c_check[3] = ' ';
    }
    printf("Введите значение коэффицента c:");
    scanf_s("%ld", &i_c);
    if (i_c == 0)
    {
        c_check[4] = 'c';
        c_check[5] = ' ';
    }
    else
    {
        c_check[4] = ' ';
        c_check[5] = ' ';
    }
    if ((i_a == 0) | (i_b == 0) | (i_c == 0))
    {
        system("cls");
        printf("Данные значения равны нулю: %s\nПроверьте правильность данных и повторите ввод.", c_check);
    }
    

    return(0);
}