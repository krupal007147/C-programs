#include <stdio.h>
int main()
{
    int a=0,b=1,c,n,count=2;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    c = a+b;

    while(count!=n)
    {
        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
        count++;
    }
    return 0;
}