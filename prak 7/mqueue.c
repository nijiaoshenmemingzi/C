/*
NIM: 18220014
Nama : Pavita Andrea
Tanggal : 11 November 2021
Topik praktikum : stacklist dan queuelist
Deskripsi : no2
*/

#include "boolean.h"
#include <stdlib.h>
#include <stdio.h>
#include "queuelist.h"


int main() {
    int x, n, y, temp, temp2;
    Queue Q;

    scanf("%d", &n);
    CreateEmpty(&Q);
    scanf("%d", &temp);
    Add(&Q, temp);
    y = 1;
    printf("%d\n",y);
    for(x=1; x<n; x++){
        scanf("%d", &temp);
        Add(&Q, temp);
        y++;
        while(temp - InfoHead(Q) > 300){
            Del(&Q, &temp2);
            y--;
        }
        printf("%d\n",y);
    }
}

