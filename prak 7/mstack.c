/*
NIM: 18220014
Nama : Pavita Andrea
Tanggal : 11 November 2021
Topik praktikum : stacklist dan queuelist
Deskripsi : no1
*/

#include "stacklist.h"
#include <stdio.h>

int main () {
    int n, i, q, x;
    int a, b;
    Stack S;
    scanf("%d", &n);
    CreateEmpty(&S);
    for (i=0;i<n;i++){
        scanf("%d", &q);
        if (q==1) {
            scanf("%d", &x);
            Push(&S, x);
        } else {
            Pop(&S, &b);
            Pop(&S, &a);
            if (q==2) {
                Push(&S, (a + b));
            } else {
                Push(&S, (a - b));
            }
        } 
    }
    printf("%d\n", InfoTop(S));
}