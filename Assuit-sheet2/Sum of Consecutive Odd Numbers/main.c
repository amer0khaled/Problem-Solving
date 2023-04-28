#include<stdio.h>

#define read_bit(x, bitnum) (x&(1U<<bitnum))>>bitnum

int main()
{
    unsigned int x, y, t;
    unsigned int i;
    unsigned long long sum = 0;

    scanf("%u", &t);

    while(t--)
    {   
        sum = 0;
        scanf("%u%u", &x, &y);

        if(x > y)
        {
            for ( i = y+1; i < x; i++)
            {
                if (read_bit(i, 0) == 1)
                {
                    sum+=i;
                }
                
            }
            
        }
        else
        {
            for ( i = x+1; i < y; i++)
            {
                if (read_bit(i, 0) == 1)
                {
                    sum+=i;
                }
                
            }
            
        }

        printf("%llu\n", sum);
        

    }




    return 0;
}