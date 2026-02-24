#include <stdio.h>
int main()
{
    int no,r,sum;
    printf("Enter a number:");
    scanf("%d",&no);

    while(no>=100)
    {
        r = no % 10;
        sum = sum + r;
        no = no/10;
    }
    printf("sum =%d",sum);
    return 0;
}