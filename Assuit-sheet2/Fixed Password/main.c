#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pass;
    int i;

    while(1)
    {
        scanf("%i",&pass);
        if(1999==pass)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }


    }

    return 0;
}
