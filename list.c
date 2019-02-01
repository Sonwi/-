#include"list.h"
#include<stdlib.h>

struct Node
{
	int Element;
	Position Next;
};

int
IsEmpty( List L )
{
	return L->Next == NULL;
}

int
IsLast( Position P, List L )
{
	return P->Next == NULL;
}

Position
Find( int x, List L )
{
	Position P;
	P = L->Next;
	while( P != NULL && P->Element != x )
		P = P->Next;

	return P; 
}

Position
FindPrevious( int x, List L )
{
	Position P;
	P = L;
	while( P->Next != NULL && P->Next->Element != x)
		P = P->Next;
	return P;
}

void 
Delete( int x, List L )
{
	Position P, TmpCell;
	P = FindPrevious( x, L );
	if( !Islast( P, L ))
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free( TmpCell );
	}
}

void 
Insert( int x, List L, Position P )
{
	Position TmpCell;
	TmpCell = malloc( sizeof( struct Node ) );
	TmpCell->Element = x;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;
}

void DeleteList( List L )
{
	Position P,Tmp;
	P = L -> Next;
	L->Next = NULL;
	while( P != NULL )
	{
		Tmp = P->Next;
		free( P );
		P = Tmp;
	}
}