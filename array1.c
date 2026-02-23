#include <stdio.h>
int main()
{
    int i,a[10],sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter no.:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {    
        printf("%d\n",a[i]);
        sum = sum + a[i];
    }
        printf("sum = %d",sum);
        return 0;
}