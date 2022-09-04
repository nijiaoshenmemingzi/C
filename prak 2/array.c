#include "boolean.h"
#include "array.h"
#include <stdio.h>

void MakeEmpty (TabInt *T){
	(*T).Neff = 0;
};


/* ********** SELEKTOR ********** */
/* *** Banyaknya elemen *** */
int NbElmt (TabInt T){
	return ((T).Neff);
};

int MaxNbEl (TabInt T){
	return (IdxMax - IdxMin + 1);
};

/* *** Selektor INDEKS *** */
IdxType GetFirstIdx (TabInt T){
	return (IdxMin);
};

IdxType GetLastIdx (TabInt T){
	return ((T).Neff);
};

ElType GetElmt (TabInt T, IdxType i){
	return ((T).TI[(i)]);
};


/* *** Selektor SET : Mengubah nilai TABEL dan elemen tabel *** */
/* Untuk type private/limited private pada bahasa tertentu */
void SetTab (TabInt Tin, TabInt *Tout){
	*Tout = Tin;
};

void SetEl (TabInt *T, IdxType i, ElType v){
	(*T).TI[(i)] = v ;
};

void SetNeff (TabInt *T, IdxType N){
	(*T).Neff = N;
};


/* ********** Test Indeks yang valid ********** */
boolean IsIdxValid (TabInt T, IdxType i){
	return ((i >= IdxMin) && (i <= IdxMax));
};

boolean IsIdxEff (TabInt T, IdxType i){
	return ((i >= GetFirstIdx(T)) && (i <= GetLastIdx(T)));
};

/* ********** TEST KOSONG/PENUH ********** */
/* *** Test tabel kosong *** */
boolean IsEmpty (TabInt T){
	return (NbElmt(T) == 0);
};

boolean IsFull (TabInt T){
	return (NbElmt(T) == (IdxMax - IdxMin + 1));
};


