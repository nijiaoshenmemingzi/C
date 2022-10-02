/* 
NIM : 18220014
Nama : Pavita Andrea
Tanggal : 30 September 2021
Topik praktikum : Prak stack & queue
Deskripsi :Soal 2
*/

#include "stack.h"
#include <stdio.h>

int main()
{
    int n, m;
    infotype x, y;
    Stack S1, S2;

    CreateEmpty(&S1);
    CreateEmpty(&S2);

    scanf("%d", &n);

    int i;
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &x);

        if (x != (-1))
        {
            Push(&S1, x);
        }
        else
        {
            if (!IsEmpty(S1))
                Pop(&S1, &x);
        }
    }
    
    
    scanf("%d", &m);
    for (i = 0; i < m; ++i)
    {
        scanf("%d", &x);

        if (x != (-1))
        {
            Push(&S2, x);
        }
        else
        {
            if (!IsEmpty(S2))
                Pop(&S2, &x);
        }
    }
    
    boolean found_diff;
    if (IsEmpty(S1) && IsEmpty(S2))
    {
        printf("SAMA\n");
    }
    else if (Top(S1) != Top(S2))
    {
        printf("BEDA\n");
    }
    else
    {
        found_diff = false;
        while (!found_diff)
        {
            Pop(&S1, &x);
            Pop(&S2, &y);
            if (x != y)
            {
                found_diff = true;
            }
            if (IsEmpty(S1))
            {
                break;
            }
        }
        if (found_diff)
        {
            printf("BEDA\n");
        }
        else
        {
            printf("SAMA\n");
        }
        
    }
}
    





