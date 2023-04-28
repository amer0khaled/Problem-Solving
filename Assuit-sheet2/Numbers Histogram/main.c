#include<stdio.h>
#include<stdlib.h>

int main()
{
    char symbol;
    unsigned int test_case;
    unsigned int i;

    scanf("%c",&symbol);

    fflush(stdin);

    scanf("%u",&test_case);

    unsigned int *num = (unsigned int *)malloc(test_case * sizeof(unsigned int));

    for ( i = 0; i < test_case; i++)
    {
        scanf("%u",num+i);
    }


    while(test_case--)
    {
        for(i = 0; i < *num; i++)
        {
            printf("%c",symbol);
        }
        num++;
        printf("\n");
    }






    return 0;
}
