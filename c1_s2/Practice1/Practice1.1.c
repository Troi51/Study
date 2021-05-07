﻿//Практическая работа №1 (исправленная)
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//07.05.2021

#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i_a = 0,      //В этой переменной храним размерность матрицы, введённой пользователем
        i_i,          // <|
        i_j,          // <| Переменные-счётчики, предназначены для работы циклов
        i_k;          // <|


    //Сообщаем компилятору, что хотим видеть в командной строке русские буквы вместо "крокозябр" 
    setlocale(LC_ALL, "Rus");
    //Проверяем значение, введенное пользователем. На всякий случай.
    do {
        system("cls");
        printf("Введите размерность матрицы в диапазоне от 1 до 5: ");
        scanf_s("%d", &i_a);
    } while ((i_a<1)|(i_a>5));
    srand(time(0));
 
    int m_c[i_a][i_a],// Массив А
        m_d[i_a][i_a],// Массив В
        m_e[i_a][i_a];// Массив С

    //Присваиваем случайное значение каждому элементу матрицы
    for (int i_i = 0; i_i < i_a; i_i++)
    {
        for (int i_j = 0; i_j < i_a; i_j++)
        {
             m_c[i_j][i_i] = (-5) + rand() % (5 - (-5) + 1);
             m_d[i_j][i_i] = (-5) + rand() % (5 - (-5) + 1);
        }
    }

    //Выводим значения матрицы А с учётом введенной пользователем размерности
    printf("\nМатрица А:");
    for (int i_i = 0; i_i < i_a; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_c[i_j][i_i]);
        }
    }

    //Выводим значения матрицы В с учётом введенной пользователем размерности
    printf("\nМатрица B:");
    for (int i_i = 0; i_i < i_a; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_d[i_j][i_i]);
        }
    }
    printf("\n");

    //Производим вычисления А*В
    printf("\nВычисляем А*В:\n");
    for (int i_i = 0; i_i < i_a; i_i++)
    {
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            m_e[i_j][i_i] = 0;
            //Сразу же выводим на экран вычисления, с помощью которых получили значение. Условие if добавлено, что бы
            //при выводе последнего перемножения не добавлялось + в конце.
            printf("a[%d,%d] = ", i_j, i_i);
            for (int i_k = 0; i_k < i_a; i_k++)
            {
                //Последовательно выводим результаты умножнения
                if (i_k == i_a -1)
                    printf("%d*%d", m_c[i_k][i_j], m_d[i_i][i_k]);
                else
                {
                    printf("%d*%d + ", m_c[i_k][i_j], m_d[i_i][i_k]);
                }
                //Вычисляем сумму для конкретной ячейки путем "строка на столбец".
                m_e[i_j][i_i] = m_e[i_j][i_i] +  m_c[i_k][i_j] * m_d[i_i][i_k];
            }
            printf(" = %d\n", m_e[i_j][i_i]);

        }
    }
 
    //Выводим результат работы программы
    printf("\nРезультат A*B:");
    for (int i_i = 0; i_i < i_a; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_e[i_i][i_j]);
        }
    }
    printf("\n");

    return(0);
}