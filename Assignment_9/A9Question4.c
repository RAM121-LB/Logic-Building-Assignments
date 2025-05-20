///////////////////////////////////////////////////////
//
//  File name :     A9Question4.c
//  Descreption :   A program which accept number from user and count frequency of 4 in it.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountFour(int iNo)
{
    int Digit = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        if(Digit == 4)
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

    iRet = CountFour(iValue);
    
    printf("%d",iRet);

    return 0;
}

/*
Output : 
Enter Number : 2321
0

Enter Number : 1334443
3

*/