#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c",&x);

    switch(x)
    {
        case 48 ... 57:
            printf("IS DIGIT");
            break;

        case 96 ... 122:
            printf("ALPHA\n");
            printf("IS SMALL");
            break;

        case 65 ... 90:
            printf("ALPHA\n");
            printf("IS CAPITAL");
            break;
    }

   return 0;
}
