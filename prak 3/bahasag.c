//NIM : 18220014
//Nama : Pavita Andrea
//Tanggal : 21 September 2021
//Topik praktikum : mesin kata
//Deskripsi : pra praktikum
#include "mesin_kata.h"
#include <stdio.h>

void bahasaG(Kata kata);
boolean isVocal(char x);
void ADVKATAg();

int main() {
  STARTKATA();
  while (!EndKata) {
    bahasaG(CKata);
    ADVKATAg();
  }
  return 0;
}

void bahasaG(Kata kata){
  for(int i = 1; i <= kata.Length; i++){
    printf("%c", kata.TabKata[i]);
    if (isVocal(kata.TabKata[i])) {
        printf("g%c", kata.TabKata[i]);
    }
  }
}

boolean isVocal(char v) {
    return ((v == 'a') || (v == 'i') || (v == 'u') || (v == 'e') || (v == 'o'));
}

void ADVKATAg() {
    IgnoreBlank();
    if (CC == MARK) {
        EndKata = true;
        printf("\n");
    } else {
        SalinKata();
        printf(" ");
    }
}
