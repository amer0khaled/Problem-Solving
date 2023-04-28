#include<stdio.h>
 #include<stdlib.h>

 int main()
 {
    int size,i;
    int smallest=0,position=1;
    scanf("%i",&size);

    int *A=(int *)malloc(size * sizeof(int));
    for(i=0 ; i<size ; i++)
    {
        scanf("%i",A+i);
    }


    smallest=A[0];

    for(i=1 ; i<size ;i++)
    {   
        if(A[i]<smallest)
        {
            smallest=A[i];
            position=i+1;

        }
        
    }

    printf("%i %i",smallest,position);

    return 0;
 }