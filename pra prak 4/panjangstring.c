#include<stdio.h>

#include "panjangstring.h"

int panjangString(char *str)
{   
    int counter = 0;
    while(*str != '\0')
    {
        counter ++;
        str = str + 1;
    }
    return counter;
}