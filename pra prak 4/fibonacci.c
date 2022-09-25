#include <stdio.h>
#include "fibonacci.h"
// Deret bilangan fibonacci adalah deret angka yang susunan angkanya
// merupakan penjumlahan dari dua angka sebelumnya.
// Contoh:
// Fib 0: 1
// Fib 1: 1
// Fib 2: 1 + 1 = 2
// Fib 3: 2 + 1 = 3
// Fib 4: 3 + 2 = 5
// Fib 5: 5 + 3 = 8

// Menerima argument sebuah integer n dan mengembalikan
// nilai suku ke-n dari deret fibonacci ke argumen result
// Contoh:
// n = 5
// Nilai argumen result = 8
void fibonacci1(int n, int *result)
{
    if (n == 0)
    {
        *result = 1;
    }
    else if (n==1)
    {
        *result = 1;
    }
    else
    {
        int fibo0 = 1;
        int fibo1 = 1;
        int hasil;

        for (int i = 2; i<= n; i++)
        {
            hasil = fibo0 + fibo1;
            fibo0 = fibo1;
            fibo1 = hasil;
        }
        *result = hasil;
    }
}
// Menerima argument sebuah integer n dan mengembalikan
// nilai suku ke-n dari deret fibonacci
int fibonacci2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n==1)
    {
        return  1;
    }
    else
    {
        int fibo0 = 1;
        int fibo1 = 1;
        int hasil;

        for (int i = 2; i<= n; i++)
        {
            hasil = fibo0 + fibo1;
            fibo0 = fibo1;
            fibo1 = hasil;
        }
        return hasil;
    }
}
// Menerima argument sebuah integer n
// Output adalah argumen result yang bertipe pointer int digunakan sebagai array
// Tuliskan semua nilai deret fibonacci dari 0 - n ke argumen result
// n = 5
// result = [1, 1, 2, 3, 5, 8]
void fibonacci3(int n, int *result)
{
    int fibo0, fibo1, i, hasil;

    fibo0= 1;
    fibo1=1;

    *result = fibo0;
    *(result+1) = fibo1;

    for(i=2; i<= n; i++)
    {
        hasil = fibo0 + fibo1;
        fibo0 = fibo1;
        fibo1 = hasil;

        *(result + i) = hasil;
    }
}
