
#include <stdio.h>
#include "garis.h"

int main(){
	int n, tl , s,i;
	tl =0;
	s=0;
	GARIS a,b;
	BacaGARIS(&a);
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		BacaGARIS(&b);
		if (IsTegakLurus(a,b)){
			tl = tl+1;
		}
		else if (IsSejajar(a,b)){
			s = s+1;
		}
	}
	printf("Sejajar: %d\n", s);
	printf("Tegak lurus: %d\n",tl);
	
}

