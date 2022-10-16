

#include "circular_queue.h"
#include "reverse.h"

void transferReverse(Queue * q1, Queue * q2)
{
    ElType x;
    int i,j;
    for (i= Length(*q1)-1;i>=0;i--)
    {
        Push( q2 , (*q1).Tab[i]);
    }    
    j = Length(*q1)-1;
    for (j;j>=0;j--)
    {
        Pop(q1);
    }
}