/* Nama/NIM	:	Mario Yudhiprawira/18213024
Nama File	:	PP11-18213024-211114-01.c
Tanggal		:	21 November 2014
Deskripsi	:	File Header untuk ADT Pohon Biner */

#include <stdbool.h>
#include "PP11-18213024-211114-01.h"
#include <stdlib.h>

// Konstruktor & Selektor

void MakeTree(infotype Akar, BinTree L, Bintree R, Bintree *P);
/* { I.S. Sembarang }
{ F.S. Menghasilkan sebuah pohon P }
{ Menghasilkan sebuah pohon biner P dari A, L, dan R, jika alokasi berhasil }
{ Menghasilkan pohon P yang kosong (Nil) jika alokasi gagal } */

infotype Akar(BinTree P);
/* { Mengirimkan nilai Akar pohon biner P } */

BinTree Left(BinTree P);
/* { Mengirimkan subpohon kiri pohon biner P } */

BinTree Right(BinTree P);
/* { Mengirimkan subpohon kanan pohon biner P } */

bool IsTreeEmpty(BinTree P);
/* { Mengirimkan true jika P adalah pohon biner yang kosong } */

bool IsOneElmt(BinTree P);
/* { Mengirimkan true jika P tidak kosong dan hanya terdiri atas 1 elemen } */

bool IsUnerLeft(BinTree P);
/* { Mengirimkan true jika pohon biner tidak kosong P adalah pohon unerleft: hanya mempunyai subpohon kiri } */

bool IsUnerRight(BinTree P);
/* { Mengirimkan true jika pohon biner tidak kosong P adalah pohon unerright: hanya mempunyai subpohon kanan } */

bool IsBiner(BinTree P);
/* { Mengirimkan true jika pohon biner tidak kosong P adalah pohon biner: mempunyai subpohon kiri dan subpohon kanan } */

void PreOrder(BinTree P);
/* { I.S. Pohon P terdefinisi }
{ F.S. Semua node pohon P sudah diproses secara PreOrder: akar, kiri, kanan }
{ Basis : Pohon kosong : tidak ada yang diproses }
{ Rekurens : Proses Akar(P);
Proses secara Preorder (Left(P));
Proses secara Preorder (Right(P)) }
Proses secara Preorder (Right(P)) } */
