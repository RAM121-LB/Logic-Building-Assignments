///////////////////////////////////////////////////////
//
//  File name :     A31Question2.c
//  Descreption :   Wirte a program which accept one number from user and off 7th and 10th bit of that number if it is on. Return modified number.
//  Author :        Ram Madhukar Thakare
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT Offbit(UINT iNo)
{
    UINT iResult = 0;
    UINT Mask1 = 1;
    UINT Mask2 = 1;

    Mask1 = Mask1 << 6;
    Mask1 = ~Mask1;
    Mask2 = Mask2 << 9;
    Mask2 = ~Mask2;
    
    iResult = iNo & Mask1;
    iResult = iResult & Mask2;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    iRet = Offbit(iValue);

    printf("Updated number is : %u",iRet);

    return 0;
}


/*
Output : 
Enter the number : 577
Updated number is : 1
*/