///////////////////////////////////////////////////////
//
//  File name :     A21Question3.c
//  Descreption :   A program which accept N number from user and return difference between Smallest and largest number.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iDiff = 0, iLarg = 0, iSamll = Arr[iLength];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iSamll)
        {
            iSamll = Arr[iCnt];
        }
        else if(Arr[iCnt] > iLarg)
        {
            iLarg = Arr[iCnt];
        }
    }

    printf("Largest : %d\n",iLarg);
    printf("Smallest : %d\n",iSamll);

    iDiff = iLarg - iSamll;

    return iDiff;
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

    iRet = Difference(p,iSize);
    
    printf("Difference of largest and smallest : %d",iRet);

    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 5
Enter 5 elements
Enter elements 1 : 54
Enter elements 2 : 12
Enter elements 3 : 49
Enter elements 4 : 32
Enter elements 5 : 48
Largest : 49
Smallest : 12
Difference of largest and smallest : 37
*/