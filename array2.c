#include <stdio.h>
int main()
{
    int i,a[3],b[3];
    for(i=0;i<3;i++)
    {
        printf("enter a elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("enter b elements:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<3;i++)
    {
          printf("elementf of b:");
          printf("%d",b[i]);
    }
    return 0;
}
