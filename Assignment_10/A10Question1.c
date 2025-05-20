///////////////////////////////////////////////////////
//
//  File name :     A10Question1.c
//  Descreption :   A program which accept number from user and return count of even digits.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountEven(int iNo)
{
    int Digit = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        if((Digit % 2)==0)
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

    iRet = CountEven(iValue);
    
    printf("%d",iRet);

    return 0;
}

/*
Output : 
Enter Number : 25418
3

Enter Number : 2222
4
*/