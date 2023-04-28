#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,i,j;
    scanf("%d",&row);

    for(i=0;i<row;i++)
    {
        for(j=row;j>=(row-i);j--)
        {
            printf("*");


        }
        printf("\n");
    }

    return 0;
}
