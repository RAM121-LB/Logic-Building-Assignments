///////////////////////////////////////////////////////
//
//  File name :     A32Question3.c
//  Descreption :   Wirte a program which accept one number and position from user and on that bit. Return modified number.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iResult = 0;
    UINT iMask = 1;

    iMask = iMask << (iPos - 1);

    iResult = iNo | iMask;

    return iResult;
    
}
int main()
{
    UINT iValue = 0, iRet = 0;
    int iLocation = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter the position : \n");
    scanf("%d",&iLocation);

    iRet = OnBit(iValue,iLocation);

    printf("Updated number is : %u",iRet);

    return 0;
}

/*
Output : 
Enter the number :
10
Enter the position :
3
Updated number is : 14
*/