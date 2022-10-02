//NIM : 18220014
//Nama : Pavita Andrea
//Tanggal : 27 September 2021
//Topik praktikum : mesin kata
//Deskripsi : remed no 1

#include <stdio.h>
#include <string.h>

void ShiftLetters(char * input, int i);

int main () {
    char input[256];
    int shift;

    scanf("%d", &shift);

    scanf("%s", input);
    int size = strlen(input);
    input[size-1] = '\0';

    ShiftLetters(input, shift);

    return 0;
}

void ShiftLetters(char * input, int numshifts) {
    char str[256] = {'\0'};
    char * delim = " \t";
    char * pch = NULL;
    int j, k, len, shifts;

    if (input == NULL)
    {
        printf ("Tidak ada pergeseran yang dilakukan\n");
        return;
    }

    strcpy (str, input);
    pch = strtok (str, delim);
    while (pch != NULL)
    {
        len = strlen (pch);
        if ((numshifts == len) || (len == 1))
        {
            printf ("%s\n", pch);
            pch = strtok (NULL, delim);
            continue;
        }

        if (len < numshifts)
            shifts = numshifts % len;
        else
            shifts = numshifts;

        for(j = shifts; j<len; j++)
            printf("%c", pch[j]);

        for(k = 0; k<shifts; k++)
            printf("%c", pch[k]);

        printf("\n");
        pch = strtok (NULL, delim);
    }
}
