#include<stdio.h>
#include<stdlib.h>

void search_for_num(int *ptr, unsigned int size, unsigned int num)
{
    int i;
    for(i=0 ; i<size ; i++)
    {   
        if(num == ptr[i])
        {
            printf("%i",i);
            break;
        }

    }

    if (i == size)
    {
        printf("%i",-1);
    }
    
}



int main()
{
    unsigned int size,num;
    int i;
    scanf("%u",&size);

    int *ptr=(int *)malloc(size * sizeof(int));

    for(i=0 ; i<size ; i++)
    {
        scanf("%i",ptr+i);
    }

    scanf("%u",&num);

    search_for_num(ptr , size , num);

    return 0;
}