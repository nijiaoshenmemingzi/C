#include <stdio.h>

int main(){
    int n,m,i,j,sum,temp;
    
    scanf("%d",&n);
//KENAPA?// //sama aja kaya i = 1; i<= n
    for(i=0;i!=n;i++){
//KENAPA?//
        sum = 0;
        scanf("%d",&m);
        for(j=1;j<=m;j++){
            if((j % 7 == 0)){
                sum += j;
            }
            else{
                temp = j;
                //KENAPA?//
                while(temp !=0 && temp % 10 != 7){
                    temp /= 10;
                    }
                if (temp != 0){
                    sum += j;
                }
                //KENAPA?//
            }
        }
        printf("%d\n",sum);

    }
    return 0;
}