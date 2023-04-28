#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,i,sum_of_digits = 0;
    long long result = 0;

    scanf("%i%i%i",&n,&a,&b);

    for(i = 1; i <= n; i++)
    {
        sum_of_digits = (i/10000)+((i/1000)%10)+((i/100)%10)+((i/10)%10)+(i%10);
        if((sum_of_digits<=b)&&(sum_of_digits>=a))
        {
            result = result + i;
        }
    }

    printf("%lld",result);


    return 0;
}
