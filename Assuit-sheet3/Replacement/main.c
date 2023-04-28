#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    scanf("%i",&size);
    int arr[size];

    for(i=0;i<size;i++)
    {
        scanf("%i",arr+i);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            arr[i]=1;
        }
        else if(arr[i]<0)
        {
            arr[i]=2;
        }
        else if(arr[i]==0)
        {
            arr[i]=0;
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%i\t",arr[i]);
    }

    return 0;
}
