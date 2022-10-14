/* NIM: 18221084 */
/* Nama: Rei Arriel Clyfton */
/* Tanggal: 19 September 2022 */
/* Topik Praktikum: Pasca Praktikum 3 Soal 2 */
/* Deskripsi: Program implementasi jumlahkonsonanvokal.h */

#include <stdio.h>
#include <ctype.h>

void jumlahKonsonanVokal(char *s, int *total_konsonan, int *total_vowel){
    int total_kons, total_vow;
    total_kons = 0;
    total_vow = 0;
    int i =0;
    while((*s) != '\0' ){
        if (isalpha(*s) == 0 ){
            s++;
        } else {
            if (((*s) == 'A') || ((*s) == 'E') || ((*s) == 'I') || ((*s) == 'O') || ((*s) == 'U') || ((*s) == 'a') || ((*s) == 'e') || ((*s) == 'i') || ((*s) == 'o') || ((*s) == 'u')){
                total_vow ++;
            } else {
            total_kons++;
            }
            s++;

        }

    (*total_konsonan) = total_kons;
    (*total_vowel) = total_vow;
}
}