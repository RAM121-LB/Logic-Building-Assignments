///////////////////////////////////////////////////////
//
//  File name :     A34Questios1.c
//  Descreption :   Singly Linear Linked List, Function should return position at which elements is found(First occure).
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


    printf("Enter the number : ");
    scanf("%d",&no);

    iRet = SearchFirstOcc(head,no);

    printf("%d is at position : %d",no,iRet);

    return 0;
}


/*
Output :

Enter the number : 30
30 is at position : 3

*/