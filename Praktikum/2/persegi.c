#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<((2*n)-1);i++){
        for(j=0;j<((2*n)-1);j++){
            if ((i+j) % 2 == 1){
                printf("X");
            }
            else{
                printf("O");
            }
        }
        printf("\n");
    }

    return 0;
}