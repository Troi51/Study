#include <stdio.h> 
#include <locale.h>

int main(void)                 
{    
    //������� 1
    setlocale(LC_ALL, "Rus");
    printf("���������� ������� ���� � ������������� ����� ���������������� �:\n\n\n ");
  
    printf("float:" "\t\t\t %zi �����\n\n\n ", sizeof(float));

    printf("double:" "\t\t %zi ����\n ", sizeof(double));
    printf("long double:" "\t\t %zi ����\n\n\n ", sizeof(long double));

    
    printf("short int:" "\t\t %zi �����\n ", sizeof(short int));
    printf("unsigned short int:" "\t %zi �����\n\n ", sizeof(unsigned short int));
    
    printf("int:" "\t\t\t %zi �����\n ", sizeof(int));
    printf("unsigned  int:" "\t\t %zi �����\n\n ", sizeof(unsigned int));

    printf("long int:" "\t\t %zi �����\n ", sizeof(long int));
    printf("unsigned long int:" "\t %zi �����\n\n ", sizeof(unsigned long int));

    printf("long long int:" "\t\t %zi ����\n ", sizeof(long long int));
    printf("unsigned long long int:" " %zi ����\n\n\n ", sizeof(unsigned long long int));


    printf("char:" "\t\t\t %zi ����\n ", sizeof(char));
    printf("unsigned char:" "\t\t %zi ����\n ", sizeof(char));

    system("pause");
    return(0);
}                               