#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;
    scanf("%i%i",&a,&b);

    if(a<b)
    {
        for(i=a;i>=1;i--)
        {
            if((a%i==0)&&(b%i==0))
            {
                printf("%i",i);
                break;
            }
        }
    }
    else
    {
        for(i=b;i>=1;i--)
        {
            if((a%i==0)&&(b%i==0))
            {
                printf("%i",i);
                break;
            }
        }
    }
    return 0;
}
