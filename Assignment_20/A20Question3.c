///////////////////////////////////////////////////////
//
//  File name :     A20Question3.c
//  Descreption :   A program which accept N number from user and accept another number as number and return index value first occurance of that number.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iOcc = 0; 

    for(iCnt = 0, iOcc = -1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iOcc = iCnt;
        }
    }

    return iOcc;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = LastOcc(p,iSize, iValue);

    printf("%d last occur at : %d",iValue,iRet);
    
    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 4
Enter 4 elements
Enter elements 1 : 21
Enter elements 2 : 31
Enter elements 3 : 21
Enter elements 4 : 41
Enter number : 21
21 last occur at : 2
*/