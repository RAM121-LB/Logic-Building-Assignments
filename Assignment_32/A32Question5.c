///////////////////////////////////////////////////////
//
//  File name :     A32Question5.c
//  Descreption :   Wirte a program which accept one number and position from user and toggle content of first and last nibble of the number (Nibble is a group of four bits). Return modified number.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x9999;

    iResult = iNo ^ iMask;
    
    return iResult;
    
}
int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated number is : %u",iRet);

    return 0;
}

/*
Output : 
Enter the number :
48089
Updated number is : 8768

Enter the number :
39321
Updated number is : 0

*/