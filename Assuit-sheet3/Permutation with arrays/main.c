#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,counter=0;

    scanf("%i",&size);

    int * arr1 = (int *)malloc(size * sizeof(int));

    int * arr2 = (int *)malloc(size * sizeof(int));

    for(i = 0; i < size; i++)
    {
        scanf("%i",arr1+i);
    }

    for(i = 0; i < size; i++)
    {
        scanf("%i",arr2+i);
    }

    for(i = 0; i < size-1; i++)
    {
        for(j = 0; j < (size-1-i); j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                arr1[j] = arr1[j] ^ arr1[j+1];
                arr1[j+1] = arr1[j] ^ arr1[j+1];
                arr1[j] = arr1[j] ^ arr1[j+1];
            }


            ///////////////////////////////////

            if(arr2[j] > arr2[j+1])
            {
                arr2[j] = arr2[j] ^ arr2[j+1];
                arr2[j+1] = arr2[j] ^ arr2[j+1];
                arr2[j] = arr2[j] ^ arr2[j+1];
            }

        }
    }


    for(i = 0; i < size; i++)
    {
        if(arr1[i] == arr2[i])
        {
            counter++;
        }
    }


    if(counter == size)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
