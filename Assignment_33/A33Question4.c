///////////////////////////////////////////////////////
//
//  File name :     A33Questios4.c
//  Descreption :   Wirte a program which accept one number and two position from user and check whether bit at first or bit at second position is on or off.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iResult1 = 0, iResult2 = 0;
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 2);

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
    int iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("ENter first position : \n");
    scanf("%d",&iLocation1);
    
    printf("ENter second position : \n");
    scanf("%d",&iLocation2);
    
    bRet = CheckBit(iValue,iLocation1,iLocation2);

    if(bRet == true)
    {
        printf("%d or %d bit is ON.\n",iLocation1,iLocation2);
    }
    else
    {
        printf("%d and %d Both bit is OFF.\n",iLocation1,iLocation2);
    }
    
    return 0;
}
/*
Output : 
Enter the number :
10
ENter first position :
3
ENter second position :
7
3 and 7 Both bit is OFF.

*/