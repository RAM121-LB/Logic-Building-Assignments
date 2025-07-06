///////////////////////////////////////////////////////
//
//  File name :     A34Questios5.c
//  Descreption :   Singly Linear Linked List, Smallest element.
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

    while(first -> next != NULL)
    {
        iAdd = iAdd + first -> data;
        first = first -> next;
    }
    return iAdd;
}
int Maximum(PNODE first)
{
    int iMax = 0;

    while(first != NULL)
    {
        if(first -> data > iMax)
        {
            iMax = first -> data;
        }
        first = first -> next;
    } 
    return iMax;
}
int Minimum(PNODE first)
{
    int iMin = 0;

    iMin = first -> data;

    while(first != NULL)
    {
        if(first -> data < iMin)
        {
            iMin = first -> data;
        }
        first = first -> next;
    } 
    return iMin;

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int no = 0;

    InsertFirst(&head,640);
    InsertFirst(&head,240);
    InsertFirst(&head,20);
    InsertFirst(&head,230);
    InsertFirst(&head,110);


    iRet = Minimum(head);

    printf("Smallest elements of LL : %d",iRet);

    return 0;
}


/*
Output :
Smallest elements of LL : 20

*/