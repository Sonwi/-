#ifndef _LIST_H
#define _LIST_H
struct Node;
typedef struct Node *PtrToNode;
typedef struct Node *List;
typedef struct Node *Position;

List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( Position P,List L );
Position Find( int x,List L );
void Delete( int x,List L );
Position FindPrevious( int x,List L );
void Insert( int x,List L,Position P );
void DeleteList( List L );
Position First( List L );
Position Advance( Position P );
int Retrieve( Position P );

#endif

