#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    scanf("%i",&size);

    int A[size];
    for(i=0;i<size;i++)
    {
        scanf("%i",A+i);
    }

    for(i=0;i<size;i++)
    {
        if(A[i]<=10)
        {
            printf("A[%i] = %i\n",i,A[i]);
        }
    }

    return 0;
}
