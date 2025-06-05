///////////////////////////////////////////////////////
//
//  File name :     A19Question2.c
//  Descreption :   A program which accept N number from user and return difference between ferquency of even and odd numbers.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iEven = 0, iOdd = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else 
        {
            iOdd++;
        }
    }

    printf("Frequency of even numbers : %d\n",iEven);
    printf("Frequency of Odd numbers : %d\n",iOdd);

    iFreq = iEven - iOdd;

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
    iRet = Frequency(p,iSize);

    printf("Difference of Frequency of even and odd numbers : %d\n",iRet);

    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 7
Enter 7 elements
Enter elements 1 : 85
Enter elements 2 : 66
Enter elements 3 : 3
Enter elements 4 : 80
Enter elements 5 : 93
Enter elements 6 : 88
Enter elements 7 : 90
Frequency of even numbers : 4
Frequency of Odd numbers : 3
Difference of Frequency of even and odd numbers : 1

*/