#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num, *arr, i,j;

    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    for(i=0;i<num-1;i++)
    {

        for(j=0;j<(num-1-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j+1]^arr[j];
            }
        }

    }

    for(i=0;i<num;i++)
    {
        printf("%i\t",arr[i]);
    }
    return 0;
}
