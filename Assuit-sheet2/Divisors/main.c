#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int i;
    int j;

    scanf("%i",&num);


    printf("%i\n",1);

    for(i = num/2; i >= 1; i--)
    {
        for ( j = 1; j <= num/2; j++)
        {
            if ( (i * j) == num)
            {

                printf("%i\n",j);


            }
        }
    }

    printf("%i",num);



    return 0;
}
