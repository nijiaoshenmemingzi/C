#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i;
    int count = 0;
    char x[100] ;
    char y[100] ;

    scanf("%s",&x);
    scanf("%s",&y);

    for(i=0;i<=strlen(x);i++){
        x[i] = tolower(x[i]);
    }

    for(i=0;i<=strlen(y);i++){
        y[i] = tolower(y[i]);
    }

    if (strlen(x) != strlen(y)){
        printf("Tidak\n");
    }

    else{
        for(i=0;i<=100;i++){
            if(x[i] != y[i]){
                count = count +1;
            }
        }
        if(count != 0){
            printf("Ya\n");
        }
        else {
            printf("Tidak\n");
        }
    }

    return 0;
}