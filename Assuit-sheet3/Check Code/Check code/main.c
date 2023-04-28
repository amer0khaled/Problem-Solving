#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,i;
    char flag = 0;

    scanf("%i",&a);
    scanf("%i",&b);

    char *ptr = (char *)malloc((a+b+2) * sizeof(char)) ;

    fflush(stdin);

    gets(ptr);

    if(ptr[a] != '-')
    {
        printf("No");

        return 0;
    }


    while(ptr[i] != '\0')
    {
        if(i != a)
        {
            if((ptr[i] < '0')||(ptr[i] > '9'))
            {
                flag=1;
            }
        }

        i++;

    }




    if(flag == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }



    return 0;
}



