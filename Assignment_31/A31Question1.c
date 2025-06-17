///////////////////////////////////////////////////////
//
//  File name :     A31Question1.c
//  Descreption :   Wirte a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.
//  Author :        Ram Madhukar Thakare
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT Offbit(UINT iNo)
{
    UINT iResult = 0;
    UINT Mask = 1;

    Mask = Mask << 6;
    Mask = ~Mask;

    iResult = iNo & Mask;

    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    iRet = Offbit(iValue);

    printf("Updated number is : %u",iRet);

    return 0;
}


/*
Output : 
Enter the number : 79
Updated number is : 15
*/