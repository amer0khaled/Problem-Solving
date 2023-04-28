#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    int year,month,day,remainder;
    scanf("%i",&age);

    year=age/365;
    month=age%365;
    remainder=age%365;
    month=remainder/30;
    day=remainder%30;

    printf("%i years\n",year);
    printf("%i months\n",month);
    printf("%i days",day);


   return 0;
}
