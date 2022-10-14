#include<stdio.h>
#include<math.h>
#include "point.h"
#include "boolean.h"

POINT MakePOINT (float X, float Y){
    POINT pt;
    Absis(pt) = X;
    Ordinat(pt) = Y;
    return pt;
}

void BacaPOINT (POINT * P){
    float x,y;
    scanf("%f %f",&x,&y);
    Absis(*P) = x;
    Ordinat(*P) = y;
}

void TulisPOINT (POINT P){
    printf("(%.2f,%.2f)",Absis(P),Ordinat(P));
}

boolean EQ (POINT P1, POINT P2){
    if((Absis(P1) == Absis(P2)) && (Ordinat(P1)==Ordinat(P2))){
        return true;
    }
    else{
        return false;
    }
}

boolean NEQ (POINT P1, POINT P2){
    if((Absis(P1) != Absis(P2)) || (Ordinat(P1)!=Ordinat(P2))){
        return true;
    }
    else{
        return false;
    }
}

boolean IsOrigin (POINT P){
    if((Absis(P) == 0) && (Ordinat(P)== 0)){
        return true;
    }
    else{
        return false;
    }    
}

boolean IsOnSbX (POINT P){
    if((Ordinat(P)== 0)){
        return true;
    }
    else{
        return false;
    }    
}

boolean IsOnSbY (POINT P){
    if((Absis(P) == 0)){
        return true;
    }
    else{
        return false;
    }    
}

int Kuadran (POINT P){
    int kuadran;
    if((Absis(P)>0) && (Ordinat(P)>0)){
        kuadran = 1;
    }
    else if((Absis(P)>0) && (Ordinat(P)<0)){
        kuadran = 4;
    }
    else if((Absis(P)<0) && (Ordinat(P)>0)){
        kuadran = 2;
    }
    else if((Absis(P)<0) && (Ordinat(P)<0)){
        kuadran = 3;
    }
    return kuadran;
}



POINT PlusDelta (POINT P, float deltaX, float deltaY){
    Absis(P) = Absis(P) + deltaX;
    Ordinat(P) = Ordinat(P) + deltaY;
    return P;
}

void Geser (POINT *P, float deltaX, float deltaY){
    Absis(*P) = Absis(*P) + deltaX;
    Ordinat(*P) = Ordinat(*P) + deltaY;    
}

float Jarak0 (POINT P){
    float tegak, datar, miring;
    datar = powf(Absis(P),2);
    tegak = powf(Ordinat(P),2);
    miring = sqrtf(datar + tegak);
    return miring;
}

float Panjang (POINT P1, POINT P2){
    float dx,dy,hasil;
    dx = Absis(P1) - Absis(P2);
    dy = Ordinat(P1) - Ordinat(P2);
    dx = powf(dx,2);
    dy = powf(dy,2);
    hasil = sqrtf(dx + dy);
    return hasil;
}