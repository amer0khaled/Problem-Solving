#include<stdio.h>
#include<stdlib.h>
 
int main()
{   
    int test_case;
    int size;
    int res = 0;
    int i;
    int j;
 
 
 
    scanf("%i", &test_case);
 
    while (test_case--)
    {
        scanf("%i", &size);
 
    int * ptr = (int *)malloc(size * sizeof(int));
 
    for ( i = 0; i < size; i++)
    {
        scanf("%i", ptr+i);
    }
 
    res = ptr[0]+ptr[1]+(1+1)-(0+1);
 
    for(i = 0; i < size-1; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if(res > ptr[i]+ptr[j]+(j+1)-(i+1))
            {
                res = ptr[i]+ptr[j]+(j+1)-(i+1);
            }
        }
        
 
    }
 
    printf("%i\n", res);
    
    }
    
 
    
    return 0;
}