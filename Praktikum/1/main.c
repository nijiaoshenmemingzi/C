#include<stdio.h>

int main(){
    int h,m,s,detikawal,sisa;
    scanf ("%d" , &detikawal);
    h = detikawal/3600 ;
    sisa = detikawal % 3600;
    m = sisa/60 ;
    s = sisa % 60 ;
    printf ("%d detik = %d jam %d menit %d detik\n", detikawal, h, m, s);
    return 0;
}