///////////////////////////////////////////////////////
//
//  File name :     A19Question1.c
//  Descreption :   A program which accept N number from user and return ferquency of even numbers.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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
    iRet = CountEven(p,iSize);

    printf("Number of even numbers : %d",iRet);

    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 6
Enter 6 elements
Enter elements 1 : 85
Enter elements 2 : 66
Enter elements 3 : 3
Enter elements 4 : 80
Enter elements 5 : 93
Enter elements 6 : 88
Number of even numbers : 3

*/