#include "panjangstring.h"
#include <stdio.h>

int panjangString(char *s ){
    int count=0;
    while(*s != '\0'){
        count += 1;
        s += 1;
    }
    return count;
}

