#include<stdio.h>
#include<math.h>

unsigned int get_number_of_digits(unsigned int num);
unsigned int reverse_num(unsigned int num, unsigned int num_digits);

int main()
{
    unsigned int num = 0;
    unsigned int num_digits = 0;
    unsigned int reversed_num = 0;

    scanf("%u",&num);

    num_digits = get_number_of_digits(num);

    reversed_num = reverse_num(num, num_digits);

    printf("%u\n",reversed_num);

    if (reversed_num == num)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


   // printf("%u",reverse_num);


    return 0;
}


/*to get number of digits*/

unsigned int get_number_of_digits(unsigned int num)
{
    unsigned int i = 1;
    unsigned int num_digits = 0;

    while ((num/(unsigned int)pow(10 , i)) != 0)
    {
        ++i;
        ++num_digits;
    }

    return num_digits+1;
}


/*to reverse the number*/

unsigned int reverse_num(unsigned int num, unsigned int num_digits)
{
    unsigned int i = 0;
    unsigned int sum = 0;
    int x;

    for ( i = 1; i <= num_digits; i++)
    {
        x = num % 10;

        num = num / 10;

        sum+=x * pow(10 , num_digits - i);

    }


    return sum;

}
