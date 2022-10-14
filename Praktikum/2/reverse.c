#include <stdio.h>

int main(){
    int x,modulo,reverse = 0;

    scanf("%d",&x);

    while(x != 0){
        modulo = x % 10;
        reverse = reverse*10 + modulo;
        x /= 10;
    }

    printf("%d\n",reverse);
    return 0;
}