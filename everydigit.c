#include<stdio.h>
void main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num );
    int fact=1;
    for(int a=num; a>=1; a--)
    {
        fact=fact*a;
    }
    printf("%d is the factorial of %d,fact,num");
    }
