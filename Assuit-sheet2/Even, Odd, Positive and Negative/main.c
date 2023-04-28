#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,even=0,odd=0,positive=0,negative=0;

     printf("please enter the size : ");
     scanf("%d",&size);

    int arr[size];



    printf("enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%i",arr+i);
    }

    for(i=0;i<size;i++)
    {
        if((arr[i]&(1u<<0))==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }



    for(i=0;i<size;i++)
    {
        if(((arr[i]&(1u<<31))==0))
        {
            if(arr[i]!=0)
            positive++;
        }
        else
        {   if(arr[i]!=0)
            negative++;
        }
    }
    printf("Even: %i\n",even);
    printf("Odd: %i\n",odd);
    printf("Positive: %i\n",positive);
    printf("Negative: %i\n",negative);
    return 0;
}

