#include<stdio.h>
void digit  (int a)
{
    if(a==0)
    {
        return ;
    }
    int dig=a%10;
    printf("%d\n",dig);
    a=a/10;
    digit (a);
}
void main()
{
    int a;
    printf("enter the value:\n");
    scanf("%d",&a);
    digit(a);
}