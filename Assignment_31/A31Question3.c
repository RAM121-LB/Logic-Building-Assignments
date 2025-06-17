///////////////////////////////////////////////////////
//
//  File name :     A31Question3.c
//  Descreption :   Wirte a program which accept one number from user and toggle 7th bit of that number. Return modified number.
//  Author :        Ram Madhukar Thakare
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT Togglebit(UINT iNo)
{
    UINT iResult = 0;
    UINT Mask1 = 1;

    Mask1 = Mask1 << 6;
    
    iResult = iNo ^ Mask1;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    iRet = Togglebit(iValue);

    printf("Updated number is : %u",iRet);

    return 0;
}


/*
Output : 
Enter the number : 137
Updated number is : 201
*/