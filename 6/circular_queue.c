#include "boolean.h"
#include "circular_queue.h"
#include <stdio.h>
#include <stdlib.h>

boolean IsEmpty (Queue Q)
{
    return (Q.HEAD == NIL && Q.TAIL== NIL);
}

boolean IsFull (Queue Q)
{
    if (Q.HEAD > Q.TAIL)
    {
        return ((Q.HEAD - Q.TAIL) == 1);
    }
    else
    {
        return ((Q.MaxEl-1) == (Q.TAIL - Q.HEAD));
    }
}

int Length (Queue Q)
/* Mengirimkan banyaknya elemen Q, 0 jika kosong */\
{
    if (IsEmpty(Q))
    {
        return 0;
    }
    else
    {
         if (Q.HEAD > Q.TAIL) 
        {
            return (Q.MaxEl - Q.HEAD + Q.TAIL + 1); 
        }
        else
        {
            return (Q.TAIL - Q.HEAD + 1);
        }
    }
}

int MaxLength (Queue Q)
/* Mengirimkan kapasitas jumlah elemen Q */
{
    return Q.MaxEl;
}

Queue CreateQueue (int Max)
{
    Queue Q;
    Q.HEAD = NIL;
    Q.TAIL = NIL;
    Q.Tab = (ElType*) malloc (Max * sizeof(ElType));
    if (Q.Tab != NULL)
    {
        Q.MaxEl = Max;
    }
    else
    {
        Q.MaxEl = 0;
    }
    return Q;
}

void DeleteQueue (Queue * Q)
{
    free((*Q).Tab);
    (*Q).MaxEl = 0;
} 

void Push (Queue * Q, ElType X)
{
    if (IsEmpty(*Q))
    {
        (*Q).HEAD = 0;
        (*Q).TAIL = 0;
        (*Q).Tab[0] = X;
    }    
    else
    {
        if ((*Q).TAIL == (MaxLength(*Q)-1))
        {
            (*Q).TAIL = 0;
        }
        else
        {
            (*Q).TAIL++;
        }
        (*Q).Tab[(*Q).TAIL] = X;
    }
}

ElType Pop (Queue * Q)
{
    ElType val;
    val = (*Q).Tab[(*Q).HEAD];
    if (Length(*Q) == 1)
    {
        (*Q).HEAD = NIL;
        (*Q).TAIL = NIL;
    } 
    else
    {
        (*Q).HEAD = ((*Q).HEAD + 1) % (*Q).MaxEl;
    }
    return val;
}

ElType Front (Queue Q)
{
    return (Q.Tab[Q.HEAD]);
}