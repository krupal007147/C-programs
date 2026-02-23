#include <stdio.h>
int main()
{
    int a[10],i,p=0,n=0;
    for(i=0;i<10;i++)
    {
        printf("enter no:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            p=p+1;
        }
        else if(a[i]<0)
        {
            n=n+1;
        }
    }
    printf("positive :%d\n",p);
    printf("negative :%d\n",n);
    return 0;
}