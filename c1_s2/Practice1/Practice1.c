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
        m_c[5][5],
        m_d[5][5];

    setlocale(LC_ALL, "Rus");
    printf("Введите количество строк массива:");
    scanf_s("%d", &i_a);
    printf("Введите количество столбцов массива:");
    scanf_s("%d", &i_b);
    srand(time(NULL));

    for (int i_i = 0; i_i < i_b; i_i++)
    {
        for (int i_j = 0; i_j < i_a; i_j++)
        {
             m_c[i_i][i_j] = -5 +rand() % 10;
        }
    }

    for (int i_i = 0; i_i < i_b; i_i++)
    {
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            m_d[i_i][i_j] = -5 + rand() % 10;
        }
    }

    for (int i_i = 0; i_i < i_b; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_c[i_j][i_i]);
        }
    }

    printf("\n");

    for (int i_i = 0; i_i < i_b; i_i++)
    {
        printf("\n");
        for (int i_j = 0; i_j < i_a; i_j++)
        {
            printf("%d ", m_d[i_j][i_i]);
        }
    }

    printf("\n");

    system("pause");
    return(0);
}