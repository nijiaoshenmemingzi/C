#include "listsirkuler.h"
#include <stdio.h>
#include <stdlib.h>

boolean IsEmpty (List L)
/* Mengirim true jika list kosong. Lihat definisi di atas. */
{
	return First(L) == Nil;
}

/****************** PEMBUATAN LIST KOSONG ******************/
void CreateEmpty (List *L)
/* I.S. L sembarang             */
/* F.S. Terbentuk list kosong. Lihat definisi di atas. */
{
	First(*L) = Nil;
}

/****************** Manajemen Memori ******************/
address Alokasi (infotype X)
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil, dan misalnya */
/* menghasilkan P, maka Info(P)=X, Next(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil */
{
	address P = (address) malloc (1 * sizeof(ElmtList));
	if (P != Nil)
	{
		Info(P) = X;
		Next(P) = Nil;
		return P;
	}
	else
	{
		return Nil;
	}
}
void Dealokasi (address P)
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */
{
	free(P);
}

/****************** PENCARIAN SEBUAH ELEMEN LIST ******************/
address Search (List L, infotype X)
/* Mencari apakah ada elemen list dengan Info(P)= X */
/* Jika ada, mengirimkan address elemen tersebut. */
/* Jika tidak ada, mengirimkan Nil */
{
    address P;
    boolean found;
    P = First(L);
    found = false;
    do {
        if (Info(P) == X) {
            found = true;
        }
        else {
            P = Next(P);
        }
    } while (P != First(L) && !found);

    if (found) {
        return P;
    }
    else {
        return Nil;
    }
}

/****************** PRIMITIF BERDASARKAN NILAI ******************/
/*** PENAMBAHAN ELEMEN ***/
void InsVFirst (List *L, infotype X)
/* I.S. L mungkin kosong */
/* F.S. Melakukan alokasi sebuah elemen dan */
/* menambahkan elemen pertama dengan nilai X jika alokasi berhasil */
{
	address p;
	p = Alokasi(X);
	if (p != Nil)
	{
		InsertFirst(L,p);
	}
	
}
void InsVLast (List *L, infotype X)
/* I.S. L mungkin kosong */
/* F.S. Melakukan alokasi sebuah elemen dan */
/* menambahkan elemen list di akhir: elemen terakhir yang baru */
/* bernilai X jika alokasi berhasil. Jika alokasi gagal: I.S.= F.S. */
{
	address p;
	p = Alokasi(X);
	if (p != Nil)
	{
		InsertLast(L,p);
	}
}

/*** PENGHAPUSAN ELEMEN ***/
void DelVFirst (List *L, infotype * X)
/* I.S. List L tidak kosong  */
/* F.S. Elemen pertama list dihapus: nilai info disimpan pada X */
/*      dan alamat elemen pertama di-dealokasi */
{
	address p;
	DelFirst(L,&p);
	(*X) = Info(p);
	Dealokasi(p);
}
void DelVLast (List *L, infotype * X)
/* I.S. list tidak kosong */
/* F.S. Elemen terakhir list dihapus: nilai info disimpan pada X */
/*      dan alamat elemen terakhir di-dealokasi */
{
	address p;
	DelLast(L,&p);
	*X = Info(p);
	Dealokasi(p);
}

/****************** PRIMITIF BERDASARKAN ALAMAT ******************/
/*** PENAMBAHAN ELEMEN BERDASARKAN ALAMAT ***/
void InsertFirst (List *L, address P)
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. Menambahkan elemen ber-address P sebagai elemen pertama */
{
	if (IsEmpty(*L))
	{
		Next(P) = P;
	}
	else
	{
		address x;
		x = First(*L);
		while (Next(x) != First(*L))
		{
			x = Next(x);
		}
		Next(P) = First(*L);
		Next(x) = P;
	}
	First(*L) = P;
}
void InsertLast (List *L, address P)
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */
{
	address p;
	if (IsEmpty(*L))
	{
		First(*L) = P;
		Next(P) = P;
	}
	else
	{
		p = First(*L);
		while (Next(p) != First(*L))
		{
			p = Next(p);
		}
		Next(p) = P;
		Next(P) = First(*L);
	}
}
void InsertAfter (List *L, address P, address Prec)
/* I.S. Prec pastilah elemen list dan bukan elemen terakhir, */
/*      P sudah dialokasi  */
/* F.S. Insert P sebagai elemen sesudah elemen beralamat Prec */
{
	Next(P) = Next(Prec);
	Next(Prec) = P;
}

/*** PENGHAPUSAN SEBUAH ELEMEN ***/
void DelFirst (List *L, address *P)
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen pertama list sebelum penghapusan */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* First element yg baru adalah suksesor elemen pertama yang lama */
{
	*P = First(*L);
	if (Next(First(*L)) == First(*L))
	{
		First(*L) = Nil;
	}
	else
	{
		address x;
		x = First(*L);
		while (Next(x) != First(*L))
		{
			x = Next(x);
		}
		First(*L) = Next(*P);
		Next(x) = First(*L);
	}
}
void DelLast (List *L, address *P)
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen terakhir list sebelum penghapusan  */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* Last element baru adalah predesesor elemen pertama yg lama, */
/* jika ada */
{
	address x,p;
	if (Next(First(*L)) == First(*L))
	{
		(*P) = First(*L);
		First(*L) = Nil;
	}
	else
	{
		x = First(*L);
		p = Nil;
		while (Next(x) != First(*L))
		{
			p = x;
			x = Next(x);
		}
		(*P) = x;
		if (p != Nil)
		{
			Next(p) = First(*L);
		}
	}
}
void DelAfter (List *L, address *Pdel, address Prec)
/* I.S. List tidak kosong. Prec adalah anggota list  */
/* F.S. Menghapus Next(Prec): */
/*      Pdel adalah alamat elemen list yang dihapus  */
{
	*Pdel = Next(Prec);
	Next(Prec) = Next(Next(Prec));
}
void DelP (List *L, infotype X)
/* I.S. Sembarang */
/* F.S. Jika ada elemen list beraddress P, dengan Info(P)=X  */
/* Maka P dihapus dari list dan di-dealokasi */
/* Jika tidak ada elemen list dengan Info(P)=X, maka list tetap */
/* List mungkin menjadi kosong karena penghapusan */
{
    address P;
    P = First(*L);

    if (Info(P) == X) {
        DelFirst(L, &P);
        Dealokasi(P);
    }
    else {
        while (Next(P) != First(*L) && Info(Next(P)) != X) {
            P = Next(P);
        }

        if (Next(P) != First(*L)) {
            DelAfter(L, &P, P);
            Dealokasi(P);
        }
    }
}

/****************** PROSES SEMUA ELEMEN LIST ******************/
void PrintInfo (List L)
/* I.S. List mungkin kosong */
/* F.S. Jika list tidak kosong, iai list dicetak ke kanan: [e1,e2,...,en] */
/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30] */
/* Jika list kosong : menulis [] */
/* Tidak ada tambahan karakter apa pun di awal, akhir, atau di tengah */
{
	address P;
    printf("[");
    if (!IsEmpty(L)) 
	{
    	P = First(L);
        do 
		{
            printf("%d", Info(P));
            if (Next(P) != First(L)) 
			{
                printf(",");
            }
            P = Next(P);
        } 
		while (P != First(L));
    }
    printf("]");
}
