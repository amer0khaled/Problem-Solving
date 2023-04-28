

/*int main()
{
    int even=0,odd=0,i;
    int positive=1,nigative=0;
    unsigned int x;
    signed int arr[5];
    printf("enter unsigned number: ");
    scanf("%d",&x);

    //to find the number even or odd
    if(x%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }

    //scan to arr
    printf("enter elements of arr:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",arr+i);

    }



    //to get evens and odds of array

    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {

            even++;

        }
        else
        {
            odd++;
        }

        if((x+arr[i]==0)||(x+arr[i]==2*x))
        {
            if(x%2==0)
            {
                even--;
            }
            else
            {
                odd--;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        switch(arr[i]&(1<<31))
        {
        case 0:
        positive++;
        break;

        }
    }

    printf("Even: %i\n",even);
    printf("Odd: %i\n",odd);
    printf("Positive: %i\n",positive);
    printf("Nigative: %i\n",6-positive);

    return 0;
}
*/
