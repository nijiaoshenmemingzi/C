#include<stdio.h>
int main(){
    int x,modulo,i;
    scanf("%d",&x);
    int sum = 0;

    while(x!=0){
        modulo = x % 10;
        sum += modulo;
        x /= 10;
    }

    printf("%d\n",sum);

    return 0;
}