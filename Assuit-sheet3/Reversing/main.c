#include <stdio.h>
#include <stdlib.h>

void print_reverse_arr(int *ptr, int n);

int main()
{
    int n,i;
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    print_reverse_arr(arr,n);

    return 0;
}

void print_reverse_arr(int *ptr, int n)
{
    int i;

    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",ptr[i]);
    }
}
