//#include"list.h"
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int Element;
	struct Node *Next;
}L;
int main()
{
	//struct Node L;
	//L = (struct Node *)malloc(sizeof(List));
	int a=12,b=13;
	L.Element = a;
	//L->Next = NULL;
	printf("%d\n",a);
	//printf("%d\n",L->Element);
	return 0;
}