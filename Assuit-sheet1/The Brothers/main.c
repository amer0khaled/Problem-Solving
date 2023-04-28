#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[20];
    char dad1[20];
    char name2[20];
    char dad2[20];
    int counter=0;
    gets(name1);
    fflush(stdin);
    gets(dad1);
    fflush(stdin);
    gets(name2);
    fflush(stdin);
    gets(dad2);



    char *ptr1=dad1;
    char *ptr2=dad2;


    while((*ptr1!=0)||(*ptr2!=0))
    {
        if(*ptr1==*ptr2)
        {
            counter++;
        }
        ptr1++;
        ptr2++;
    }
    if(strlen(dad1)==counter)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }


    return 0;
}
