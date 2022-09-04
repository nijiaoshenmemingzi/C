#include "point.h"
#include <stdio.h>

int main(){
  POINT delvin = MakePOINT(12.5, 25);
  TulisPOINT(delvin); // (12.5,25)
  printf("\n");
  POINT pavita = MakePOINT(12.5, -25);
  TulisPOINT(pavita); // (12.5,25)
  printf("\n");
  
  boolean result1 = EQ(delvin, pavita);
  boolean result2 = NEQ(delvin, pavita);

  printf("Result 1 = %u, Result 2 = %u\n", result1, result2);

  printf("Is Origin Pavita : %u\n", IsOrigin(pavita));
  printf("IsOnSbX Pavita : %u\n", IsOnSbX(pavita));
  printf("IsOnSbY Pavita : %u\n", IsOnSbY(pavita));
  printf("Kuadran Pavita : %d\n", Kuadran(pavita)); 

  POINT gresya = PlusDelta(pavita, 12.5, 25);
  TulisPOINT(gresya);
  printf("\n");

  TulisPOINT(pavita);
  Geser(&pavita, 10, 20);
  TulisPOINT(pavita);

  printf("Jarak pavita dari 0,0 : %.2f\n", Jarak0(pavita)); 
  printf("Jarak pavita dan gresya : %.2f", Panjang(pavita, gresya))
  ;

  return 0;
}
