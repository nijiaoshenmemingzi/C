
#include "boolean.h"
#include <stdio.h>
#include "array.h"

int main (){
    int n;
    scanf("%d", &n);
    TabInt T;
    MakeEmpty(&T);
    SetNeff(&T, n);
    int i;
    for (i=1;i<=NbElmt(T);i++){
        int a;
        scanf("%d", &a);
        SetEl(&T, i, a);
    }
    
    int aritmatika, geometri;
    aritmatika = 1;
    geometri = 1;
    float selisih1;
    selisih1 = (GetElmt(T,2))-(GetElmt(T,1));
    float selisih2;
    selisih2 = (GetElmt(T,2))/(GetElmt(T,1));
    for (i=1;i<NbElmt(T);i++){
        if ((GetElmt(T,(i+1)))-(GetElmt(T,i)) != selisih1)
        {
            aritmatika = 0;
        };
        if ((GetElmt(T,(i+1)))/(GetElmt(T,i)) != selisih2)
        {
            geometri = 0;
        };
    }
    if ((geometri == 1)&&(aritmatika == 0)){
        printf("%s\n", "Geometri");
    }    
    else if ((geometri == 1)&&(aritmatika == 1)){
        printf("%s\n", "Keduanya");
    }   
    else if ((geometri == 0)&&(aritmatika == 1)){
        printf("%s\n", "Aritmatika");
    }
    else{
        printf("%s\n", "Bukan keduanya");
    }

	return 0;
}

