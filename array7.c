#include <stdio.h>
int main()
{
    int a[5],i,r,n;
    for(i=0;i<5;i++)
    {
        printf("Enter elements of a:");
        scanf("%d",&a[i]);
    }
    printf("enter n:");
    scanf("%d",&n);

    printf("enter r:");
    scanf("%d",&r);

    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            a[i]=r;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\n Replaced:%d",a[i]);
    }
    return 0;
}