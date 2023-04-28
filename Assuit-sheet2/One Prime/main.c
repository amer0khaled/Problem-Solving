#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    scanf("%d",&x);


    if((x==0)||(x==1))
    {
        printf("NO");
    }


    for(i=2;i<x;i++)
    {
        if((x%i)==0)
        {
            printf("NO");
            break;
        }

    }
    if(i==x)
    {
        printf("YES");
    }

    return 0;
}
