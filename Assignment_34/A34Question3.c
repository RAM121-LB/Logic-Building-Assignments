///////////////////////////////////////////////////////
//
//  File name :     A34Questios3.c
//  Descreption :   Singly Linear Linked List, Addition of all elements.
//  Author :        Ram Madhukar Thakare
//  Date :          05/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

int SearchFirstOcc(PNODE first, int no)
{
    int iCount = 1;

    while(first -> next != NULL)
    {
        if(first -> data == no)
        {
            return iCount;
        }
        
        first = first -> next;
        iCount++;
    
    }
}
int SearchLastOcc(PNODE first, int no)
{
    int iCount = 1;
    int iPos = 0;

    while(first -> next != NULL)
    {
        if(first -> data == no)
        {
            iPos = iCount;
        }
        
        first = first -> next;
        iCount++;
    
    }
    return iPos;
}
int Addition(PNODE first)
{
    int iAdd = 0;

    while(first != NULL)
    {
        iAdd = iAdd + first -> data;
        first = first -> next;
    }
    return iAdd;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int no = 0;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    iRet = Addition(head);

    printf("Addition of all elements : %d",iRet);

    return 0;
}


/*
Output :
Addition of all elements : 250

*/