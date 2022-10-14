#include<stdio.h>
#include "point.h"


int main(){
    float x,y;
    POINT poin;
    scanf("%f %f",&x,&y);
    poin = MakePOINT(x,y);
    TulisPOINT(poin);
    return 0;
}