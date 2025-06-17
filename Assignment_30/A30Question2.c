///////////////////////////////////////////////////////
//
//  File name :     A30Question2.c
//  Descreption :   Wirte a program which checks whether 5th & 18th bit is ON or OFF.
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
    UINT Mask1 = 16;        //5th bit
    UINT Mask2 = 131072;        //18th bit

    if((iNo & Mask1) && (iNo & Mask2))
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
        printf("Both bit is ON");
    }
    else
    {
        printf("One or Both bit is OFF");
    }


    return 0;
}


/*
Output : 
Enter the number : 131088
Both bit is ON

Enter the number : 1312088
One or Both bit is OFF
*/