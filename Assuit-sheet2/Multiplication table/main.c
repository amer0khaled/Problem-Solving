#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%i",&n);

    for(i=1;i<=12;i++)
    {

        printf("%i * %i = %i\n",n,i,n*i);
    }
    return 0;
}
