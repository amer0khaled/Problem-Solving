#include <stdio.h>
#include <stdlib.h>

long long sum_arr(long long *ptr, int n);

int main()
{
    int n,i;
    scanf("%d",&n);

    long long arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",arr+i);
    }


    printf("%lld",sum_arr(arr,n));

    return 0;
}


long long sum_arr(long long *ptr, int n)
{
    int i;
    long long z,sum=0;

    for(i=0;i<n;i++)
    {
        sum+=ptr[i];
    }

    if(sum>=0)
    {
        z=sum;
    }
    else
    {
        z=-sum;
    }

    return z;
}
