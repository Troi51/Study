#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int i_a,
        i_b,
        i_i,
        i_j,
        i_k,
        i_m,
        m_c[5][5],
        m_d[5][5],
        m_e[5][5];

    setlocale(LC_ALL, "Rus");
    printf("Введите количество строк массива:");
    scanf_s("%d", &i_a);
    printf("Введите количество столбцов массива:");
    scanf_s("%d", &i_b);
    srand(time(0));


   for (int i_i = 0; i_i < 5; i_i++)
    {
        for (int i_j = 0; i_j < 5; i_j++)
        {
            m_c[i_i][i_j] = 0;
            m_d[i_i][i_j] = 0;
        }
    }

    
    for (int i_i = 0; i_i < i_b; i_i++)
    {
        for (int i_j = 0; i_j < i_a; i_j++)
        {
             m_c[i_i][i_j] = rand() % 7-1;
             m_d[i_i][i_j] = rand() % 7 - 1;
        }
    }

    printf("\nМатрица А:");
    for (int i_i = 0; i_i < i_b; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_c[i_j][i_i]);
        }
    }

    printf("\nМатрица B:");
    for (int i_i = 0; i_i < i_b; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_d[i_j][i_i]);
        }
    }
    printf("\n");

    for (int i_i = 0; i_i < i_b; i_i++)
    {
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            m_e[i_j][i_i] = m_c[0][i_j]*m_d[i_i][0]+
                            m_c[1][i_j]*m_d[i_i][1]+
                            m_c[2][i_j]*m_d[i_i][2]+ 
                            m_c[3][i_j]*m_d[i_i][3]+
                            m_c[4][i_j]*m_d[i_i][4];
        }
    }

    printf("\nРезультат A*B:");
    for (int i_i = 0; i_i < i_b; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_e[i_i][i_j]);
        }
    }
    printf("\n");


    system("pause");
    return(0);
}