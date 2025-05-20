///////////////////////////////////////////////////////
//
//  File name :     A10Question5.c
//  Descreption :   A program which accept number from user and return difference between summation of even digits and summation of odd digits.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountDiff(int iNo)
{
    int Digit = 0, iDiff = 0, iEven = 0, iOdd = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        if((Digit % 2)==0)
        {
            iEven = iEven + Digit;
        }
        else
        {
            iOdd = iOdd + Digit;
        }
        iNo = iNo / 10;
    }
    iDiff = iEven - iOdd;
    
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}

/*
Output : 
Enter Number : 1202
3

Enter Number : 2395
-15
*/