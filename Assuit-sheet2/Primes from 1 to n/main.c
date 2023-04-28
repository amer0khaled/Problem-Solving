#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;
    unsigned int flag = 0;
    unsigned int i, j;

    scanf("%u",&num);

    for(i = 2; i <= num; i++)
    {
        for(j = 2; j <= i/2; j++)
        {
            flag = 0;

            if(i%j == 0)
            {
                flag = 1;
                break;

            }

        }

        if(flag == 0)
        {
            printf("%u ",i);
        }
    }
    return 0;
}
