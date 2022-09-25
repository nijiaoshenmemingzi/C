#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    while (x!=0)
    {
        printf("%d",x%10);
        x/=10;
    }
    printf("\n");
    return 0;
}