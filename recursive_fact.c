#include<stdio.h>
int fact(int i,int fact1)
{
    if(i<1)
    {
        return fact1;
    }
    fact1=fact1*i;
    fact(i-1,fact1);
}
void main()
{
    int a;
    printf("enter the value:\n");
    scanf("%d",&a);
    int res=fact(a,1);
    printf("the factorial is %d:\n",res);
}