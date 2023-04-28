#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size , i = 0;
    unsigned int counter=0 , flag = 0;
    scanf("%i",&size);

    unsigned int * ptr = (unsigned int *)malloc(size * sizeof(unsigned int));

    for ( i = 0; i < size; i++)
    {
        scanf("%u",ptr+i);

        if(ptr[i] % 2 != 0)
        {
            printf("%i",0);

            return 0;
        }

    }

    i = 0;

    while (ptr[i] % 2 == 0)
    {
        ptr[i] = ptr[i] / 2;
        flag++;
        i++;

        if (flag == size)
        {
            counter++;
            flag = 0;
        }
        
        
        if (i == size)
        {
            i = 0;
        }
        
    }

    printf("%u",counter);
    
    
    
    return 0;

}