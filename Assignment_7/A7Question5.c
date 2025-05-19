///////////////////////////////////////////////////////
//
//  File name :     A7Question5.c
//  Descreption :   A program which returns difference between Even factorial and odd factorial of given number.
//  Author :        Ram Madhukar Thakare
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0, iDiff = 0;

    int iEvenFact = 1;
    int iOddFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    iDiff = iEvenFact - iOddFact;
    return iDiff;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;

}

/*
Output : 
Enter number : 5
Odd factorial of number is 15

Enter number : -11
Odd factorial of number is 10395
*/
