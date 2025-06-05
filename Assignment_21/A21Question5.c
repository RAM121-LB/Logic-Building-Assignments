///////////////////////////////////////////////////////
//
//  File name :     A21Question5.c
//  Descreption :   A program which accept N number from user and display summation of digit of each number.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iCount = 0;
        int iSum = 0, iDigit = 0;
        int iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit; 
            iCount++;
            iNo = iNo / 10;
        }
        
            printf("Summation of Digits are : %d\n",iSum);
    }
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

    DigitsSum(p,iSize);
    
    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 5
Enter 5 elements
Enter elements 1 : 32
Enter elements 2 : 14
Enter elements 3 : 6
Enter elements 4 : 86
Enter elements 5 : 53
Summation of Digits are : 5
Summation of Digits are : 5
Summation of Digits are : 6
Summation of Digits are : 14
Summation of Digits are : 8
*/