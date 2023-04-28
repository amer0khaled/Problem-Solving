#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
   int j;
   long long sum=0;
   int  x,y;
  while (scanf("%i%i",&x,&y))
   {
 
       if (x<=0 ||y<=0)
        return 0;
 
       sum=0;
       if (x<y)
       {
           for (j=x;j<=y;j++)
           {
               printf("%i ",j);
               sum+=j;
           }
       }
           else
           {
               for (j=y;j<=x;j++)
           {
               printf("%i ",j);
               sum+=j;
           }
           }
           printf("sum =%i\n",sum);
 
   }
 
 
    return 0;
}