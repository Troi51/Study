//??????? 3.1
#include <stdio.h> 
#include <locale.h>


int Sum(int *x, int *y)                               /*????? ?????????? ??????? ???????? ?????????, ??????? ????? ???????? ?????? ?? ?????????? ???????*/
                                                      /*? ????????? ??????? ?????????? ?????? ??????????*/
{
    if (*x < 0)                                       /*????????? ????????, ?????????? ? ?????? ?? ?????????? ????????? ???????*/
        *x = *x * -1;                                 /*???? ??? ?????? ????, ?? ???????? ???????????? ???????? ? ?????? ?? ????? */
    if (*y < 0)                                       /*????????? ????????, ?????????? ? ?????? ?? ?????????? ????????? ???????*/
        *y = *y * -1;                                 /*???? ??? ?????? ????, ?? ???????? ???????????? ???????? ? ?????? ?? ????? */
    int z = 5;
    return(*x + *y + z);                              /*?????????? ???????????? ? ?????????? ?????? ?? ??????*/
}

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a = -1;
    int b = -2;
    int c = Sum(&a, &b);                               /*???????? ? ????????? ??????? ?????? ?????????? ? ? b*/
    printf("%i,%i\n", a, b);                           /*??? ???????? ??????? ???????? ?????????? ? ? b*/
    printf("????????? ?????? ?????????: %i\n", c);     /*??????? ????????? ?????? ??????? Sum*/
    system("pause");
    return(0);
}