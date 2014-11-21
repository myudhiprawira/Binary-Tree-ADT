

#include <stdbool.h>
#include "PP11-18213024-211114-01.h"
#include <stddef.h>
#include <stdio.h>

// Konstruktor & Selektor

void MakeTree(infotype Akar, BinTree L, BinTree R, BinTree *P) {
	(*P) = (BinTree)malloc(sizeof(Node));
	Akar(*P) = Akar;
	if (P != Nil) {
		Left(*P) = L;
		Right(*P) = R;
		}
	}

/* infotype Akar(BinTree P) {
	Defined as Macro (Akar(P))
	} */

/* BinTree Left(BinTree P) {
	Defined as Macro (Left(P))
	} */

/* BinTree Right(BinTree P) {
	Defined as Macro (Right(P))
	} */

bool IsTreeEmpty(BinTree P) {
	return (P == Nil);
	}

bool IsOneElmt(BinTree P) {
	return ((Left(P) == Nil) && (Right(P) == Nil));
	}

bool IsUnerLeft(BinTree P) {
	return ((Left(P) != Nil) && (Right(P) == Nil));
	}

bool IsUnerRight(BinTree P) {
	return ((Left(P) == Nil) && (Right(P) != Nil));
	}

bool IsBiner(BinTree P) {
	return ((Left(P) != Nil) && (Right(P) != Nil));
	}

void PreOrder(BinTree P) {
	if (!(IsTreeEmpty(P))) {
		// printf("Pohon kosong\n");
	// else {
		printf("%d\n", Akar(P));
		PreOrder(Left(P));
		PreOrder(Right(P));
		}
	}
