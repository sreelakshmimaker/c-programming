#include <stdio.h>
void main()
{
    int cigars,weekend;
    printf("enter the number of cigars:\n");
    scanf("%d",&cigars);
    printf("enter 0 for not weekend \n emter 1 for weekend");
    scanf("%d",&weekend); 
    if(weekend)
    {
        if(cigars>=40)
    {
    printf("sucess");
    }
     else
    {
        printf("fail");
    }
}
else
{
    if(cigars>=40 &&cigars<=40)
    {
        printf("sucess");
    }
    else
    {
    printf("fail");
    }
}
}
    
    