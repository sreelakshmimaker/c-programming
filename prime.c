#include <stdio.h>
void main()
{
    int num;
    printf("enter the num:\n");
    scanf("%d",&num);
    int count=0;
    for(int a=1;a<=num;a++)
    {
        if(num%a==0)
        {
            count++
        }
    }
    if(count==2)
    {
        printf("%d is the prime number");
    }
    else
    {
        printf("%d is not a prime number");
    }
    }