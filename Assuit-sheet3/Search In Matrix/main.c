#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,i,j,number,flag = 0;

    scanf("%i%i",&row,&col);

    int **ptr = (int **)malloc(row * sizeof(int *));

    for(i = 0;i < row; i++)
    {
        ptr[i] = (int *)malloc(col * sizeof(int));

        for(j = 0; j < col; j++)
        {
            scanf("%i",(*(ptr+i)+j));
        }

    }

    scanf("%i",&number);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(number == ptr[i][j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            break;
        }

    }

    if(flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }


    return 0;
}
