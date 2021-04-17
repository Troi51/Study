#include <stdio.h> 
#include <locale.h>

int main(void)
{
    //Задание 2
    setlocale(LC_ALL, "Rus");
    printf("Рассчитаем теоретические диапазоны значений:\n\n");

    //CHAR
    printf("CHAR\n");
    printf("Для хранения char используется 1 байт и поскольку char может быть как положительным, так и отрицательным,\nто диапазон значений char:\n");
    printf("[-(2^(n-1));2^(n-1)-1], где n - разрядность типа. Получим:[-128;127]\n");
    char a = 127;
    char b = -131;
    printf("Присваиваем переменной типа char значение 127: %i\n", a);
    printf("Присваиваем переменной типа char значение -131: %i\n\n", b);

    //UNSIGNED CHAR
    printf("UNSIGNED CHAR\n");
    printf("Для хранения unsigned char используется 1 байт и поскольку unsigned char может быть только положительным,\nто диапазон значений unsigned char:\n");
    printf("[0;2^(n)-1], где n - разрядность типа. Получим:[0;255]\n");
    unsigned char c = 254;
    unsigned char d = 257;
    printf("Присваиваем переменной типа char значение 254: %i\n", c);
    printf("Присваиваем переменной типа char значение 257: %i\n\n", d);
    
    //LONG LONG INT
    printf("LONG LONG INT\n");
    printf("Для хранения long long int используется 8 байт и поскольку long long int может быть как положительным, так и отрицательным,\nто диапазон значений long long int:\n");
    printf("[-(2^(n-1));2^(n-1)-1], где n - разрядность типа. Получим:[-9 223 372 036 854 775 808, 9 223 372 036 854 775 807]\n");
    long long int e = 9223372036854775801;
    long long int f = 9223372036854775809;
    printf("Присваиваем переменной типа char значение 9223372036854775801: %lli\n", e);
    printf("Присваиваем переменной типа char значение 9223372036854775809: %lli\n\n", f);

    //UNSIGNED SHORT INT
    printf("UNSIGNED SHORT INT\n");
    printf("Для хранения unsigned short int используется 2 байта и поскольку unsigned short int может быть только положительным,\nто диапазон значений unsigned short int:\n");
    printf("[0;2^(n)-1], где n - разрядность типа. Получим:[0;65 535]\n");
    unsigned short int g = 65530;
    unsigned short int h = 65537;
    printf("Присваиваем переменной типа char значение 65530: %u\n", g);
    printf("Присваиваем переменной типа char значение 65537: %u\n\n", h);

    //DOUBLE
    printf("DOUBLE\n");
    printf("Для хранения double используется 8 байт и поскольку double может быть как положительным, так и отрицательным,\nто диапазон значений double:\n");
    printf("(2-2^-52)*2^1023. Получим:[+-2.23*10^-308;+-1.80*10^308]\n");
    double j = 1.1e305;
    double k = 1.1e308;
    printf("Присваиваем переменной типа char значение 1.1e305: %f\n", j);
    printf("Присваиваем переменной типа char значение 1.1e308: %f\n\n", k);

    system("pause");
    return(0);
}