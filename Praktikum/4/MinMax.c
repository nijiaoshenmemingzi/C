#include<stdio.h>
#include "MinMax.h"
#include <stdlib.h>

List MinMax(List L)
{
    int i;
    int max, min;
    int idxmax = 0, idxmin = 0;
    max = L.A[0];
    min = L.A[0];
    for (i = 1; i < Length(L); i++)
    {
        if (L.A[i] > max)
        {
            max = L.A[i];
            idxmax = i;
        }
        if (L.A[i] < min)
        {
            min = L.A[i];
            idxmin = i;
        }
    }
    if (idxmax == idxmin)
    {
        DeleteAt(&L, idxmin);
        InsertLast(&L, max);
    }
    else if (idxmax > idxmin)
    {
        DeleteAt(&L, idxmax);
        DeleteAt(&L, idxmin);
        InsertLast(&L, min);
        InsertLast(&L, max);
    }
    else
    {
        DeleteAt(&L, idxmin);
        DeleteAt(&L, idxmax);
        InsertLast(&L, min);
        InsertLast(&L, max);
    }
    return L;
}