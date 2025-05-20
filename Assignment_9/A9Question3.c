///////////////////////////////////////////////////////
//
//  File name :     A9Question3.c
//  Descreption :   A program which accept number from user and count frequency of 2 in it.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountTwo(int iNo)
{
    int Digit = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        if(Digit == 2)
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

    iRet = CountTwo(iValue);
    
    printf("%d",iRet);

    return 0;
}

/*
Output : 
Enter Number : 34251
1

Enter Number : 22132
3
*/