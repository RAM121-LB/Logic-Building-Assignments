///////////////////////////////////////////////////////
//
//  File name :     A20Question1.c
//  Descreption :   A program which accept N number from user and accept another number as number and check whether number is present or not.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
            break;
        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
    int *p = NULL;
    printf("Enter number of elements : ");
    scanf("%d",&iSize);
    
    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = Frequency(p,iSize, iValue);

    if(bRet == TRUE)
    {
        printf("%d is Present",iValue);
    }
    else 
    {
        printf("%d is absent",iValue);
    }
    
    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 4
Enter 4 elements
Enter elements 1 : 23
Enter elements 2 : 21
Enter elements 3 : 56
Enter elements 4 : 54
Enter number : 21
21 is Present
*/