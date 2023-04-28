#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,i,j;

    scanf("%i",&row);

    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++)
        {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
