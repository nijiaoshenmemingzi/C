#include "hashmap.h"

/* *** Konstruktor/Kreator *** */
void CreateEmpty(HashMap *M)
/* I.S. Sembarang */
/* F.S. Membuat sebuah HashMap M kosong berkapasitas MaxEl */
/* Ciri HashMap kosong : count bernilai Nil dengan seluruh isi map Undefined */
{
	int i;
	(*M).Count = Nil;
	for (i=0;i<MaxEl;i++)
	{
		(*M).Elements[i].Key = Undefined;
		(*M).Elements[i].Value = Undefined;
	}
}

/* *** Index Penyimpanan dengan modulo *** */
address Hash(keytype K)
/* Menghasilkan indeks penyimpanan dengan operasi modulo ke MaxEl */
{
	return K % MaxEl;
}

/* ********** Operator Dasar HashMap ********* */
valuetype Value(HashMap M, keytype k)
/* Mengembalikan nilai value dengan key k dari M */
/* Jika tidak ada key k pada M, akan mengembalikan Undefined */
{
	int i;
	i = 0;
	valuetype v;
	boolean found;
	found = false;
	while (i < MaxEl && !found)
	{
		if (M.Elements[i].Key == k)
		{
			v = M.Elements[i].Value;
			found = true;
		}
		i++;
	}
	if (found)
	{
		return v;
	}
	else
	{
		return Undefined;
	}
}

void Insert(HashMap *M, keytype k, valuetype v)
/* Menambahkan Elmt sebagai elemen HashMap M. */
/* I.S. M mungkin kosong, M tidak penuh
        M mungkin sudah beranggotakan v dengan key k */
/* F.S. v menjadi anggota dari M dengan key k. Jika k sudah ada, operasi tidak dilakukan 
        index yang digunakan untuk menyimpan v adalah hash dari k
        gunakan open addressing jika index sudah terisi    */
{
	int i,idx;
	i = 0;
	boolean found;
	found = false;
	while (i < MaxEl && !found)
	{
		if ((*M).Elements[i].Key == k)
		{
			v = (*M).Elements[i].Value;
			found = true;
		}
		i++;
	}
	if (!found)
	{
		idx = Hash(k);
		while((*M).Elements[idx].Key != Undefined)
		{
			idx = Hash(idx+1);
		}
		(*M).Elements[idx].Key = k;
		(*M).Elements[idx].Value = v;
		(*M).Count++;
	}
}
