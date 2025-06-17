///////////////////////////////////////////////////////
//
//  File name :     A30Question4.c
//  Descreption :   Wirte a program which checks whether 7th,8th & 9th bit is ON or OFF.
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
    UINT Mask1 = 64;            //7th bit 
    UINT Mask2 = 128;         //8th bit
    UINT Mask3 = 256;       //9th bit
  
    if((iNo & Mask1) && (iNo & Mask2) && (iNo & Mask3))
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
        printf("All bit is ON");
    }
    else
    {
        printf("One or Multiple bit is OFF");
    }


    return 0;
}


/*
Output : 
Enter the number : 448
All bit is ON

Enter the number : 256
One or Multiple bit is OFF
*/