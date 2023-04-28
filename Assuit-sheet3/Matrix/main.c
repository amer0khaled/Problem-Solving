#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,result;
    int primary_diagonal = 0, secondary_diagonal = 0;


    scanf("%i",&size);

    int **ptr = (int **)malloc(size * sizeof(int *));

    for(i = 0; i < size; i++)
    {
        ptr[i] =(int *)malloc(size * sizeof(int));

        for(j = 0; j < size; j++)
        {
            scanf("%i",(*(ptr+i)+j));
        }

    }



    for(i = 0; i < size; i++)
    {
        primary_diagonal= primary_diagonal + ptr[i][i];
        secondary_diagonal= secondary_diagonal + ptr[i][size-1-i];
    }



    result = primary_diagonal - secondary_diagonal;

    if(result >= 0)
    {
        printf("%i",result);
    }
    else if(result < 0)
    {
        printf("%i",-1 * result);
    }


    return 0;
}
