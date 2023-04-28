#include<stdio.h>
#include<stdlib.h>


unsigned long long get_fact(unsigned char num);

int main()
{
    char i;
    unsigned char test_case;

    scanf("%u",&test_case);

    unsigned char * num = (unsigned char *)malloc(test_case * sizeof(unsigned char));



    for ( i = 0; i < test_case; i++)
    {
        scanf("%i",num+i);
    }

    for ( i = 0; i < test_case; i++)
    {
        printf("%llu\n",get_fact(num[i]));

    }


    return 0;

}

unsigned long long get_fact(unsigned char num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }


    return num * get_fact(num - 1);


}
