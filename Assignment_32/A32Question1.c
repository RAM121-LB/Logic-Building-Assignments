///////////////////////////////////////////////////////
//
//  File name :     A32Question1.c
//  Descreption :   Wirte a program which accept one number and position from user and check whether bit at that position is on or off.if bit is one return TRUE otherwise return FALSE.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo, int iPos)
{
    UINT iResult = 0;
    UINT iMask = 1;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    UINT iValue = 0;
    int iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter the position : \n");
    scanf("%d",&iLocation);

    bRet = CheckBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("%uth bit is ON\n");
    }
    else
    {
        printf("%uth bit is OFF");
    }

    return 0;
}

/*
Output : 
Enter the number :
10
Enter the position :
2
2th bit is ON
*/