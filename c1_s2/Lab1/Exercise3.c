#include <stdio.h> 
#include <locale.h>

int main(void)
{
    //������� 3
    setlocale(LC_ALL, "Rus");
    printf("�������� ����������:\n\n\n");
    printf("INT\n\n");
    printf("��� ���������� ���� int - ������� ��� ��������:\n");
    int a, b, a1;
    scanf_s("%i", &a);
    scanf_s("%i", &b);
    a1 = a + b;
    printf("a+b = %d\n\n",a1);
    
    printf("UNSIGNED CHAR\n\n");
    printf("��� ���������� ���� unsigned char - ������� ��� ��������:\n");
    unsigned char c, d, c1;
    scanf_s("%hhu", &c);
    scanf_s("%hhu", &d);
    c1 = c - d;
    printf("c-d = %i\n\n", c1);
    
    printf("DOUBLE\n\n");
    printf("��� ���������� ���� double - ������� ��� ��������:\n");
    double e, f, e1;
    scanf_s("%lf", &e);
    scanf_s("%lf", &f);
    e1 = e + f;
    printf("e+f =  %lf\n\n", e1);
    
    printf("INT � ������� � ���� ����� � ��������� ������\n\n");
    printf("����� �������� ��� ���������� ���� int: ");
    int g;
    scanf_s("%i", &g);
    printf("���������: %f\n\n", g);

    printf("CHAR � ������� � ���� �������\n\n");
    printf("����� �������� ��� ���������� ���� char: ");
    char h;
    scanf_s("%i", &h);
    printf("���������: %c\n\n", h);
    
    system("pause");
    return(0);
}