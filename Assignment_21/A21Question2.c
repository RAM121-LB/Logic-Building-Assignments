///////////////////////////////////////////////////////
//
//  File name :     A21Question2.c
//  Descreption :   A program which accept N number from user and return Smallest number.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iSamll = Arr[iLength];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iSamll)
        {
            iSamll = Arr[iCnt];
        }
    }
    return iSamll;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
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

    iRet = Minimum(p,iSize);
    
    printf("Smallest value : %d",iRet);

    free(p);

    return 0;
}

/*
Output :
Enter number of elements : 5
Enter 5 elements
Enter elements 1 : 24
Enter elements 2 : 51
Enter elements 3 : 3
Enter elements 4 : 65
Enter elements 5 : 78
Smallest value : 3
*/