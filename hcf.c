#include <stdio.h>
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);

    while(a!=b)
    {
        if(a>b)
        a = a-b;
        else 
        b = b-a;
    }
    printf("HCF = %d",b);
    return 0;
}