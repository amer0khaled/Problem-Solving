#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,end,i,j,counter=0;

    scanf("%i%i",&size,&end);

    int *arr = (int *)malloc(size * sizeof(int));

    int * result = (int *)malloc(end * sizeof(int));

    for(i = 0; i < size; i++)
    {
        scanf("%i",arr+i);
    }

    for(i = 1; i <= end; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(i == arr[j])
            {
                counter++;
            }
        }
        result[i] = counter;

        counter = 0;
    }

    for(i = 1; i <= end; i++)
    {
        printf("%i\n",result[i]);
    }





    return 0;
}
