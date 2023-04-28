#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   float b;
   int floor,ceil,round;
   scanf("%i%f",&a,&b);

    floor=((a/b)*10)/10;

    ceil=(((a/b)*10)/10)+1;

    round=(((a/b)*10));

   if(((round%10)>4)&&((round%10)<=9))
   {
       round=(round/10)+1;
   }
   else
   {
       round=round/10;
   }

   printf("floor %i / %i = %i\n",a,b,floor);
   printf("ceil %i / %i = %i\n",a,b,ceil);
   printf("round %i / %i = %i\n\n\n",a,b,round);


   return 0;
}
