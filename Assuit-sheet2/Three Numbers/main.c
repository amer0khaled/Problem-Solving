#include<stdio.h>

int main()
{
    int k, s;
    int x, y, z;
    int counter = 0;

    scanf("%i%i",&k ,&s);

    for(x = 0; x <= k; x++)
    {
        for(y = 0; y <= k; y++)
        {
            if(((s-x-y) >= 0)&&((s-x-y) <= k))
            {
                counter++;
            }
        }
    }

    printf("%i", counter);

    return 0;


}
