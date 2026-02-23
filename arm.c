#include <stdio.h>
int main()
{
    int no,r,sum=0,t;
    printf("enter no.:");
    scanf("%d",&no);
    t=no;

    while(no>=1)
    {
        r = no % 10;
        sum = sum + (r*r*r);
        no = no / 10;
    }
    printf("arm = %d\n",sum);
    if(sum==t)
    {
        printf("armstrong no");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}