#include <stdio.h>
#include <stdlib.h>

void sort_arr(int *ptr, int size);

int main()
{
    int size,i,flag=1;
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }

    sort_arr(arr,size);


    for(i=1;i<size;i++)
    {
        if(arr[0]==arr[i])
        {
            flag++;
        }
    }


    if((flag&(1<<0))==1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }


    return 0;
}

void sort_arr(int *ptr, int size)
{
    int i,j;

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<(size-i-1);j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                ptr[j]=ptr[j]^ptr[j+1];
                ptr[j+1]=ptr[j]^ptr[j+1];
                ptr[j]=ptr[j+1]^ptr[j];
            }
        }
    }
}
