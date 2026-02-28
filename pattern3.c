#include <stdio.h>
int main()
{
    char ch,j;
    for(ch='A';ch<='E';ch++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}