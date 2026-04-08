
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a,b,c ,values:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==2 && b==2 && c==2)
    {
        printf("10");
    }
    else if(a==b && b==c && c==a)
    {
        printf("5");
    }
    else if(a!=b && a!=c)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
}