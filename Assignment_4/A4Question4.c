///////////////////////////////////////////////////////
//
//  File name :     A4Question4.c
//  Descreption :   A program which accept number from user and display its summation of non factors.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
int SumNonFact(int iNo)
{

    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of Non Factors is : %d",iRet);
    return 0;
}

/*
Output :
Enter number : 12
Summation of Non Factors is : 50

Enter number : -12
Summation of Non Factors is : 50
*/