#include<stdio.h>
#include<stdlib.h>

void compare(int *ptr , int size);

int main()
{
    int size,i;

    scanf("%i",&size);

    int *ptr=(int *)malloc(size * sizeof(int));

    for(i=0 ; i<size ; i++)
    {
        scanf("%i",ptr+i);
    }

    compare(ptr , size);

    return 0;
}

void compare(int *ptr , int size)
{   
    int i,j,count=0;
    for(i=0,j=size-1 ; i<=(size-1)/2 ; i++,j--)
    {   
        if(ptr[i]==ptr[j])
        {
            count++;
        }

    }

    if(count == ((size-1)/2)+1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}