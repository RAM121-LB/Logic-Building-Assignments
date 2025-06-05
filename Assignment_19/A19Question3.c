///////////////////////////////////////////////////////
//
//  File name :     A19Question3.c
//  Descreption :   A program which accept N number from user and Check whether that number contains 11 in it or not.
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

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
            break;
        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0, bRet = 0, iCnt = 0;
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
    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 6
Enter 6 elements
Enter elements 1 : 85
Enter elements 2 : 66
Enter elements 3 : 11
Enter elements 4 : 80
Enter elements 5 : 93
Enter elements 6 : 88
11 is present
*/