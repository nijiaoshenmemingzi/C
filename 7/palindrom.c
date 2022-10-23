#include <stdio.h>
#include "stack.h"


int main(){
    int x;
    Stack s,copys,s1,s2,stemp;

    scanf("%d",&x);
    if(x == 0){
        printf("Stack kosong\n");
    }
    else{
        CreateEmpty(&s1);
        CreateEmpty(&stemp);
        while (x!=0)
        {
            Push(&s1,x);
            Push(&stemp,x);
            scanf("%d",&x);
        }
        int length;
        length = Top(s1) +1;

        if (length==1)
        {
            printf("Palindrom\n");
        }
        else
        {
            CreateEmpty(&s2);
            int i,y;
            for (int i = 0; i < length; i++)
            {
               Pop(&stemp,&y);
               Push(&s2,y);
            }
            int palindrom = 1;
            for (int i = 0; i < length; i++)
            {
                if(s1.T[i] != s2.T[i])
                {
                    palindrom = 0;
                }
            }
            if (palindrom==0)
            {
                printf("Bukan Palindrom\n");
            }
            else
            {
                printf("Palindrom\n");
            }

        }
        
        }
    return 0;
}