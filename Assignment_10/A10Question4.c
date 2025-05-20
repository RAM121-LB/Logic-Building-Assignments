///////////////////////////////////////////////////////
//
//  File name :     A10Question4.c
//  Descreption :   A program which accept number from user and return Multiplication of all digits.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
    int Digit = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = 1;

    while(iNo != 0)
    {
        Digit = iNo % 10;
        iCnt = iCnt * Digit;
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

    iRet = MultDigits(iValue);
    
    printf("%d",iRet);

    return 0;
}

/*
Output : 
Enter Number : 2341
24

Enter Number : 222
8

*/