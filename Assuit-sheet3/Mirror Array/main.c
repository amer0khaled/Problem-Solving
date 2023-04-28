#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,i,j,temp;

    scanf("%i%i",&row,&col);

    int ** ptr = (int **)malloc(row * sizeof(int *));

    for(i = 0; i < row; i++)
    {
        ptr[i] = (int *)malloc(col * sizeof(int));

        for(j = 0; j < col; j++)
        {
            scanf("%i",(*(ptr+i)+j));
        }

    }

    for(i = 0; i < row; i++)
    {
       for(j = 0; j < col/2; j++)
       {
           temp = ptr[i][j];
           ptr[i][j] = ptr[i][col - 1 - j];
           ptr[i][col - 1 - j] = temp;
       }
    }


    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%i ",ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
