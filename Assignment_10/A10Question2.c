///////////////////////////////////////////////////////
//
//  File name :     A10Question2.c
//  Descreption :   A program which accept number from user and return count of odd digits.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountOdd(int iNo)
{
    int Digit = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        if((Digit % 2)!=0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    
    printf("%d",iRet);

    return 0;
}

/*
Output : 
Enter Number : 12123
3

Enter Number : 2222
0
*/