///////////////////////////////////////////////////////
//
//  File name :     A30Question5.c
//  Descreption :   Wirte a program which checks whether first and last bit (1 & 32) ON or OFF.
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
    UINT iResult1 = 0, iResult2 = 0;
    UINT MaskFirst = 1;            //1th bit 
    UINT MaskLast = 2147483648;         //32th bit
  
    if((iNo & MaskFirst) && (iNo & MaskLast))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
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
        printf("First and Last bit is ON");
    }
    else
    {
        printf("First or Last bit is OFF");
    }
    return 0;
}


/*
Output : 
Enter the number : 2374264018
First or Last bit is OFF

Enter the number : 2147483649
First and Last bit is ON
*/