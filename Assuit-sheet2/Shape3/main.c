#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s;

    scanf("%i",&n);


    for(i=1;i<=n;i++)
    {
        for(s=1;s<=(n-i);s++)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }


    for(i=n;i>=1;i--)
    {

        for(s=(n-i);s>=1;s--)
        {
            printf(" ");
        }

        for(j=(2*i-1);j>=1;j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;

}




