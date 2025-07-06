///////////////////////////////////////////////////////
//
//  File name :     A33Question3.c
//  Descreption :   Wirte a program which accept one number from user and check whether 9th or 12th bit is on or off.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iResult1 = 0, iResult2 = 0;
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    iMask1 = iMask1 << 8;
    iMask2 = iMask2 << 11;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%u",&iValue);
    
    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("9th or 12th bit is ON.\n");
    }
    else
    {
        printf("9th and 12th Both bit is OFF.\n");
    }
    
    return 0;
}
/*
Output : 
Enter the number :
257
9th or 12th bit is ON.

Enter the number :
513
9th and 12th Both bit is OFF.

*/