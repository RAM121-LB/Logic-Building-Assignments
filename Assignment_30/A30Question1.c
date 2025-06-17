///////////////////////////////////////////////////////
//
//  File name :     A30Question1.c
//  Descreption :   Wirte a program which checks whether 15th bit is ON or OFF.
//  Author :        Ram Madhukar Thakare
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    UINT iResult = 0;
    UINT Mask = 16384;

    iResult = iNo & Mask;

    return (iResult == Mask);
}
int main()
{
    UINT iValue = 0 ;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == TRUE)
    {
        printf("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }

    return 0;
}


/*
Output : 
Enter the number : 16320
15th bit is OFF

Enter the number : 16520
15th bit is ON
*/