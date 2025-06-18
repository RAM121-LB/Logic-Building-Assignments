///////////////////////////////////////////////////////
//
//  File name :     A31Question5.c
//  Descreption :   Wirte a program which accept one number from user and on its first 4 bits. Return modified number.
//  Author :        Ram Madhukar Thakare
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT Onbit(UINT iNo)
{
    int iCnt = 0;

    UINT iResult = 0;
    UINT Mask1 = 15;

    iResult = iNo | Mask1;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    iRet = Onbit(iValue);

    printf("Updated number is : %u",iRet);

    return 0;
}


/*
Output : 
Enter the number : 73
Updated number is : 79

Enter the number : 2121
Updated number is : 2127
*/
