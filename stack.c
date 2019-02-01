#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    ElementType Element;
    PtrToNode Next;
};

int
IsEmpty( Stack S )
{
    return S->Next == NULL;
}

void
MakeEmpty( Stack S )
{
    while( !IsEmpty( S ) );
    Pop( S );
}

Stack
CreateStack( void )
{
    Stack S;
    S = malloc( sizeof( struct Node ) );
    S->Next == NULL;
    MakeEmpty( S );
    return S;
}

void
Push( ElementType X, Stack S )
{
    PtrToNode TmpCell;

    TmpCell = malloc( sizeof( struct Node ) );
    TmpCell->Element = X;
    TmpCell->Next = S->Next;
    S->Next = TmpCell;
}

ElementType
Top( Stack S)
{
    if( !IsEmpty( S ) )
    {
        return S->Next->Element;
    }
}

void
Pop( Stack S)
{
    PtrToNode FirstCell;
    if( IsEmpty( S ) )
    {
        printf("Empty stack\n");
    }
    else
    {
        FirstCell = S->Next;
        S->Next = S->Next->Next;
        free( FirstCell );
        FirstCell = NULL;
    }
    
}

 




