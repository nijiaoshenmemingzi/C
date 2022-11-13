#include <stdio.h>
#include "listsirkuler.h"

int ElemenKeN(List L, int r) {
  address p;
  p = First(L);
  int i;
  i = 0;
  for (i;i<r;i++)
  {
  	
  	p = Next(p);
  	
  }
  return Info(p);
}

int main () 
{
	List L;
	int r;
	int x;
	int i = 0;
	CreateEmpty(&L);
	scanf("%d",&x);
	while (x != 0)
	{
		InsVLast(&L,x); 
		scanf("%d",&x);
	}
	scanf("%d",&r);
  	if (!IsEmpty(L))
  	{
  		printf("%d\n", ElemenKeN(L, r));
  	}
  	else if (IsEmpty(L))
  	{
  		printf("List Kosong\n");
  	}
  	return 0; 
}
