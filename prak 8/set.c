#include "set.h"

/* *** Konstruktor/Kreator *** */
void CreateEmpty(Set *S)
/* I.S. Sembarang */
/* F.S. Membuat sebuah Set S kosong berkapasitas MaxEl */
/* Ciri Set kosong : count bernilai Nil */
{
	(*S).Count = Nil;
}

/* ********* Predikat Untuk test keadaan KOLEKSI ********* */
boolean IsEmpty(Set S)
/* Mengirim true jika Set S kosong*/
/* Ciri Set kosong : count bernilai Nil */
{
	return S.Count == Nil;
}

boolean IsFull(Set S)
/* Mengirim true jika Set S penuh */
/* Ciri Set penuh : count bernilai MaxEl */
{
	return S.Count == MaxEl;
}

/* ********** Operator Dasar Set ********* */
void Insert(Set *S, infotype Elmt)
/* Menambahkan Elmt sebagai elemen Set S. */
/* I.S. S mungkin kosong, S tidak penuh
        S mungkin sudah beranggotakan Elmt */
/* F.S. Elmt menjadi anggota dari S. Jika Elmt sudah merupakan anggota, operasi tidak dilakukan */
{
	if (IsEmpty(*S))
	{
		(*S).Count++;
		(*S).Elements[0] = Elmt;
	}
	else
	{
		if (! IsMember((*S),Elmt))
		{
			(*S).Count++;
			(*S).Elements[(*S).Count-1] = Elmt;
		}
	}
}

void Delete(Set *S, infotype Elmt)
/* Menghapus Elmt dari Set S. */
/* I.S. S tidak kosong
        Elmt mungkin anggota / bukan anggota dari S */
/* F.S. Elmt bukan anggota dari S */
{
	int idx;
	idx = 0;
	if (IsMember((*S),Elmt))
	{
		while ((*S).Elements[idx] != Elmt)
		{
			idx++;
		}
		for (idx;idx<(*S).Count-1;idx++)
		{
			(*S).Elements[idx] = (*S).Elements[idx+1];
		}
		(*S).Count--;
	}
}

boolean IsMember(Set S, infotype Elmt)
/* Mengembalikan true jika Elmt adalah member dari S */
{
	int i;
	i = 0;
	boolean ada;
	ada = false;
	while (i < S.Count && ada == false)
	{
		if (S.Elements[i] == Elmt)
		{
			ada = true;
		}
		i++;
	}
	return ada;
}

