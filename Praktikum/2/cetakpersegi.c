#include <stdio.h>

int main ()
{
    int n, loop;
    loop = 1;
    scanf("%d", &n);
    while (loop <= 2*n-1)
    {
        if(loop % 2 != 0)
        {
            printf("O");
            int i;
            for (i=1;i < 2*n-1; i ++)
            {
                if (i % 2 == 0)
                {
                    printf("O");
                } else
                {
                    printf("X");
                }
            }
        } else
        {
            printf("X");
            int i;
            for (i=1;i <2*n-1; i ++)
            {
                if (i % 2 == 0)
                {
                    printf("X");
                } else
                {
                    printf("O");
                }
            }
        }
        loop = loop + 1; 
        printf("\n");
    
    }
    
    
    return 0;
}