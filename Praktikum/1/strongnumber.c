#include <stdio.h>

int factorial(int x){
    int fact = 1, i;
    for (i = 1; i<= x; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num,modulo;
    scanf("%d",&num);
    int numAwal = num;
    int sum = 0;

    while (num != 0){
        modulo = num % 10;
        sum += factorial(modulo);
        num /= 10;
    }

    if (sum == numAwal){
        printf("Y\n");
    }
    else {
        printf("N\n");
    }
    return 0;
}