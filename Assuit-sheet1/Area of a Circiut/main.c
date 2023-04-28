#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r;
    double pi=3.141592653;
    double area;

    scanf("%lf",&r);

    area=pi*r*r;

    printf("%.9f",area);


   return 0;
}
