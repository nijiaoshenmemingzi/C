#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char input[10];
    int output[10] = {0,0,0,0,0,0,0,0,0,0};

    scanf("%s",&input);

    for(i=0; i<strlen(input);i++){
        if(input[i] == '0'){
            output[0]++;
        }
        else if(input[i] == '1'){
            output[1]++;
        }
        else if(input[i] == '2'){
            output[2]++;
        }
        else if(input[i] == '3'){
            output[3]++;
        }
        else if(input[i] == '4'){
            output[4]++;
        }
        else if(input[i] == '5'){
            output[5]++;
        }
        else if(input[i] == '6'){
            output[6]++;
        }
        else if(input[i] == '7'){
            output[7]++;
        }
        else if(input[i] == '8'){
            output[8]++;
        }
        else if(input[i] == '9'){
            output[9]++;
        }
    }
    for(i =0; i<9;i++){
        printf("%d",output[i]);
    }
    printf("%d\n",output[9]);
    return 0;
}