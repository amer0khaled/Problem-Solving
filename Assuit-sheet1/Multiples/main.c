#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%i%i",&a,&b);

    if((a%b==0)||(b%a==0))
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}
