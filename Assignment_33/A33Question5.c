///////////////////////////////////////////////////////
//
//  File name :     A33Questios5.c
//  Descreption :   Wirte a program which accept one number from user and range of positions from user. Toggle all bits from that range.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iResult = 0;
    UINT iMask = 1, Mask = 0;
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask << (iStart - 1);
        Mask = Mask | iMask;
        iMask = 1;
        iStart++;
    }

    iResult = iNo ^ Mask;

    return iResult;

}
int main()
{
    UINT iValue = 0, iRet = 0;
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter start : \n");
    scanf("%d",&iNo1);
    printf("Enter End : \n");
    scanf("%d",&iNo2);

    iRet = ToggleBitRange(iValue,iNo1,iNo2);

    printf("Updated number is : %u",iRet);
    
    return 0;
}
/*
Output : 
Enter the number :
897
Enter start :
9
Enter End :
13
Updated number is : 7297
*/