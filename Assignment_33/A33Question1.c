///////////////////////////////////////////////////////
//
//  File name :     A33Question1.c
//  Descreption :   Wirte a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iResult = 0;
    int iCount = 0, iCnt = 0;
    UINT iMask = 1;

    for(iCnt = 0; iCnt < 32; iCnt++)
    {
        iMask = iMask << iCnt;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            iCount++;
        }

        iMask = 1;
    }

    return iCount;
    
}
int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);
    
    iRet = CountOne(iValue);
    
    printf("On bits are : %d",iRet);
    
    return 0;
}
/*
Output : 
Enter the number :
11
On bits are : 3

*/