#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long a,c,b,d;

   long long x;

   scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

   x=((a*b)-(c*d));

   printf("Difference = %lld",x);

   return 0;
}
