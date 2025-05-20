///////////////////////////////////////////////////////
//
//  File name :     A9Question2.c
//  Descreption :   A program which accept number from user and check whether it contains 0 in it or not.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int Digit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        if(Digit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}

/*
Output : 
Enter Number : 342012
It contains Zero

Enter Number : 1223
There is no Zero
*/