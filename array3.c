#include <stdio.h>
int main()
{
    int a[3],b[3],i,sum[3];

    for(i=0;i<3;i++)
    {
        printf("enter no a:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("enter no b:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        sum[i] = a[i] + b[i];
    }
    for(i=0;i<3;i++)
    {
        printf(" sum = %d\n",sum[i]);
    }
    return 0;
}