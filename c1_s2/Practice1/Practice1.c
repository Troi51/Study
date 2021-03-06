//Практическая работа №1
//Студент ИВТб20з-1 Ряжкин Дмитрий Андреевич
//17.04.2021

#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i_a,      //В этой переменной храним размерность матрицы, введённой пользователем
        i_i,      // <|
        i_j,      // <| Переменные-счётчики, предназначены для работы циклов
        i_k,      // <|
        m_c[5][5],// Массив А
        m_d[5][5],// Массив В
        m_e[5][5];// Массив С

    //Сообщаем компилятору, что хотим видеть в командной строке русские буквы вместо "крокозябр" 
    setlocale(LC_ALL, "Rus");
    //Проверяем значение, введенное пользователем. На всякий случай.
    do {
        system("cls");
        printf("Введите размерность матрицы в диапазоне от 1 до 5: ");
        scanf_s("%d", &i_a);
    } while ((i_a<1)|(i_a>5));
    srand(time(0));

    //Присваиваем 0 для всех матрицы по размерности 5х5. Зачем? Объяснение далее по коду
    for (int i_i = 0; i_i < 5; i_i++)
    {
        for (int i_j = 0; i_j < 5; i_j++)
        {
            m_c[i_i][i_j] = 0;
            m_d[i_i][i_j] = 0;
        }
    }

    //Присваиваем случайное значение каждому элементу матрицы
    for (int i_i = 0; i_i < i_a; i_i++)
    {
        for (int i_j = 0; i_j < i_a; i_j++)
        {
             m_c[i_j][i_i] = rand() % 7-1;
             m_d[i_j][i_i] = rand() % 7 - 1;
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
            //Вычисляем сумму для конкретной ячейки путем "строка на столбец".
            //Важный момент - сначала мы заполнили матрицу нулями, что бы иметь возможность работать с пустыми ячейками. 
            //Сделано для того, что бы не брать в расчёт размерность матрицы и вычислять всё одним махом.
            //Например, при матрице 3х3 (как и в любой другой) нули никак не повлияют на результат. А итоговый результат 
            //мы ограничим выборкой пользователя, т.е. он ничего не увидит. Ему и не надо.
            m_e[i_j][i_i] = m_c[0][i_j] * m_d[i_i][0] +
                            m_c[1][i_j] * m_d[i_i][1] +
                            m_c[2][i_j] * m_d[i_i][2] +
                            m_c[3][i_j] * m_d[i_i][3] +
                            m_c[4][i_j] * m_d[i_i][4];
            //Сразу же выводим на экран вычисления, с помощью которых получили значение. Условие if добавлено, что бы
            //при выводе последнего перемножения не добавлялось + в конце.
            printf("a[%d,%d] = ", i_j, i_i);
            for (int i_k = 0; i_k < i_a; i_k++)
            {
                if (i_k == i_a -1)
                    printf("%d*%d", m_c[i_k][i_j], m_d[i_i][i_k]);
                else
                {
                    printf("%d*%d + ", m_c[i_k][i_j], m_d[i_i][i_k]);
                }
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