#include<stdio.h>

int main(){
    int i,n,q,l,r;
    int array[1000];
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&array[i]);
    }

    for(i=n+1;i<=1000;i++){
        array[i] = array[i-n];
    }

    scanf("%d",&q);

    for(i=1;i<=q;i++){
        scanf("%d %d",&l,&r);
        int j,sum=0;
        for(j=l;j<=r;j++){
            sum += array[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}