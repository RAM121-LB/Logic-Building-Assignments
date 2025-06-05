///////////////////////////////////////////////////////
//
//  File name :     A19Question5.c
//  Descreption :   A program which accept N number from user and accept another number as number and retuen frequency of that number.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
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

    printf("Enter number for frequency : ");
    scanf("%d",&iValue);

    iRet = Frequency(p,iSize, iValue);

    printf("Frequency of %d is : %d",iValue, iRet);
    
    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 5
Enter 5 elements
Enter elements 1 : 22
Enter elements 2 : 31
Enter elements 3 : 22
Enter elements 4 : 45
Enter elements 5 : 22
Enter number for frequency : 22
Frequency of 22 is : 3

*/