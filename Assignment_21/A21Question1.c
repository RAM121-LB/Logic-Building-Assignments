///////////////////////////////////////////////////////
//
//  File name :     A21Question1.c
//  Descreption :   A program which accept N number from user and return largest number.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iLarg = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iLarg)
        {
            iLarg = Arr[iCnt];
        }
    }
    return iLarg;
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

    iRet = Maximum(p,iSize);
    
    printf("Largest value : %d",iRet);

    free(p);

    return 0;
}

/*
Enter number of elements : 6
Enter 6 elements
Enter elements 1 : 20
Enter elements 2 : 50
Enter elements 3 : 10
Enter elements 4 : 100
Enter elements 5 : 121
Enter elements 6 : 51
Largest value : 121

*/