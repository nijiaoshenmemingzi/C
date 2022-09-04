
#include <stdio.h>
int main(){
	int a , i, jmlh;
	jmlh = 0;
	scanf ("%d",&a);
	for (i=1 ; i<=a ; i++){
		if(a%i == 0){
			jmlh = jmlh + i;
		}
	}
	printf("%d\n", jmlh);
	return 0;

}

