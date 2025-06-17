///////////////////////////////////////////////////////
//
//  File name :     A30Question3.c
//  Descreption :   Wirte a program which checks whether 7th, 15th, 21th & 28 bit is ON or OFF.
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
    UINT Mask2 = 16384;         //15th bit
    UINT Mask3 = 1048576;       //21th bit
    UINT Mask4 = 134217728;     //28th bit

    if((iNo & Mask1) && (iNo & Mask2) && (iNo & Mask3) && (iNo & Mask4))
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
Enter the number : 135282752
All bit is ON

Enter the number : 156482315
One or Multiple bit is OFF
*/