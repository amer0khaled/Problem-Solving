#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   scanf("%d",&x);

   x=x/1000;

   if(x%2==0)
   {
       printf("EVEN");
   }
   else
   {
       printf("ODD");
   }


   return 0;
}