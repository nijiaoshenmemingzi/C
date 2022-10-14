#include <stdio.h>

int main(){
    int input,lulus=0;
    float rata=0,count =0,sum=0;
    char indeks;

    scanf("%d",&input);

    if(input == -999){
        printf("Tidak ada data\n");
    }
    else{
        while(input != -999){
            if((input >= 0) && (input <= 4)){
                sum += input;
                count += 1;
                if(input >= 3){
                    lulus += 1;
                }
            }
            scanf("%d",&input);
        }
        
//PENTING//
        if (count != 0){
//PENTING//
            rata = sum/count;
            if(rata == 4){
                indeks = 'A';
            }
            else if((rata >= 3) && (rata < 4)){
                indeks = 'B';
            }
            else if((rata >= 2) && (rata < 3)){
                indeks = 'C';
            }
            else if((rata >= 1) && (rata < 2)){
                indeks = 'D';
            }
            else if((rata >= 0) && (rata < 1)){
                indeks = 'E';
            }
            printf("Jumlah mahasiswa yang lulus = %d\n",lulus);
            printf("Nilai rata-rata = %.2f\n",rata);
            printf("Indeks akhir kelas = %c\n",indeks);
        }
//PENTING//
        else{
            printf("Tidak ada data\n");
        }
//PENTING//    
    }
    return 0;
    
}