#include<stdio.h>
#include<stdlib.h>

#define int_max 100000
#define int_min -100000

int main()
{
    int size;
    int min = int_max;
    int max = int_min;
    int min_index;
    int max_index;
    int temp;
    int i;
    scanf("%i", &size);

    int * ptr =(int *)malloc(size * sizeof(int));

    for ( i = 0; i < size; i++)
    {
        scanf("%i", ptr+i);

        if (min > ptr[i])
        {
            min = ptr[i];
            min_index = i;
        }

        if (max < ptr[i])
        {
            max = ptr[i];
            max_index = i;
        }
    }


    temp = ptr[min_index];
    ptr[min_index] = ptr[max_index];
    ptr[max_index] = temp;


    for ( i = 0; i < size; i++)
    {
        printf("%i ", ptr[i]);
    }
    
    




    return 0;
}