#include <stdio.h>
#include <stdlib.h>
void sorting_array(int *ptr, int size);
int main()
{
    int size,i;
    printf("please enter the size off array: ");
    scanf("%i",&size);
    int arr[size];

    for(i=0;i<size;i++)
    {
        scanf("%i",arr+i);
    }

    sorting_array(arr,size);

    return 0;
}

void sorting_array(int *ptr, int size)
{
    int i,j;

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                ptr[j]=ptr[j]^ptr[j+1];
                ptr[j+1]=ptr[j]^ptr[j+1];
                ptr[j]=ptr[j+1]^ptr[j];
            }
        }
    }

    printf("%i",ptr[size-1]);

}
