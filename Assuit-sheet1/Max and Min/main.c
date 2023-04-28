#include <stdio.h>
#include <stdlib.h>
void min_num(int a, int b, int c);
void max_num(int a, int b, int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

   min_num(a,b,c);

   max_num(a,b,c);


    return 0;
}



void min_num(int a, int b, int c)
{
     if(((a<=c)&&(a<=b)))
    {
        printf("%d ",a);

    }
    else if(((b<=a)&&(b<=c)))
    {
        printf("%d ",b);
    }
    else if(((c<=a)&&(c<=b)))
    {
        printf("%d ",c);
    }
   /* else if(a==b==c)
    {
        printf("%d",a);
    }*/
}

void max_num(int a, int b, int c)
{
     if(((a>=c)&&(a>=b)))
    {
        printf("%d",a);

    }
    else if(((b>=a)&&(b>=c)))
    {
        printf("%d",b);
    }
    else if(((c>=a)&&(c>=b)))
    {
        printf("%d",c);
    }
    /*else if(a==b==c)
    {
        printf("%d",a);
    }*/
}

