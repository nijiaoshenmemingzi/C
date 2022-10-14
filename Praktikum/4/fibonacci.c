#include<stdio.h>
#include "fibonacci.h"
#include <stdlib.h>

// Menerima argument sebuah integer n dan mengembalikan
// nilai suku ke-n dari deret fibonacci ke argumen result
// Contoh:
// n = 5
// Nilai argumen result = 8
void fibonacci1(int n, int *result){

    if((n == 0) || (n == 1)){
        *result = 1;
    }
    else {
        int i,u1 = 1,u2=1,jumlahfibo;

        for(i = 2; i<= n ; i++){
            jumlahfibo = u1 + u2;
            u1 = u2;
            u2 = jumlahfibo;

        }
        (*result) = jumlahfibo;        
    }
}

// Menerima argument sebuah integer n dan mengembalikan
// nilai suku ke-n dari deret fibonacci
int fibonacci2(int n){

    if((n == 0) || (n == 1)){
        return 1;
    }
    else {
        int i,u1 = 1,u2=1,jumlahfibo;

        for(i = 2; i<= n ; i++){
            jumlahfibo = u1 + u2;
            u1 = u2;
            u2 = jumlahfibo;
        }
        return(jumlahfibo);        
    }

}

// Menerima argument sebuah integer n
// Output adalah argumen result yang bertipe pointer int digunakan sebagai array
// Tuliskan semua nilai deret fibonacci dari 0 - n ke argumen result
// n = 5
// result = [1, 1, 2, 3, 5, 8]
void fibonacci3(int n, int *result){

    if((n == 0) || (n == 1)){
        *result = 1;
    }
    else {
        int i,u1 = 1,u2=1,jumlahfibo;
        *result = u1;
        *(result+1) = u2;

        for(i = 2; i<= n ; i++){
            jumlahfibo = u1 + u2;
            u1 = u2;
            u2 = jumlahfibo;
            *(result + i) = jumlahfibo;
        }
    }    


}