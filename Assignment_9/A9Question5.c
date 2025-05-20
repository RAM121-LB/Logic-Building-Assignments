///////////////////////////////////////////////////////
//
//  File name :     A9Question5.c
//  Descreption :   A program which accept number from user and count frequency of such a digit which are less than 6.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
{
    int Digit = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        if(Digit < 6)
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

    iRet = Count(iValue);
    
    printf("%d",iRet);

    return 0;
}

/*
Output : 
Enter Number : 21232
5

Enter Number : 87870
1

*/