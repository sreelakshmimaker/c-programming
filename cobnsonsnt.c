
#include <stdio.h>
void main()
{
    int a;
    printf("enter the value:\n");
    scanf("%d",&a);
    int uc=(a>=3);
    int lc=(a<=13);
    int result=lc && uc;
    printf("the %dis in the range of 3-13is:%d",a,result);

}