#include <stdio.h>
int main()
{
    int a[5],i,n,p=0;
    for(i=0;i<5;i++)
    {
        printf("Enter no:");
        scanf("%d",&a[i]);
    }
    printf("Enter value of n: ");
    scanf("%d",&n);
    
    for(i=0;i<10;i++)
    {
        if(n==a[i])
        {
           p++;
        }
    }
    printf("%d",p);    
    printf("\n");
    return 0;
}