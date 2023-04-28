#include<stdio.h>

int main()
{
    int a, b, i;
    int lucky = 0;
    int x;
    int flag = 0;
    int counter = 0;

    scanf("%i%i", &a, &b);

    for(i = a; i <= b; i++)
    {
        x = i;
        counter=0;
        lucky=0;


        while(x != 0)
        {
            if(x%10 == 4 || x%10 == 7)
            {
                lucky++;
            }

            x= x/10;
            counter++;
        }

        if(lucky == counter)
        {
            printf("%i ",i);
            flag = 1;
        }

    }

    if(flag == 0)
    {
        printf("%i",-1);
    }






    return 0;
}
