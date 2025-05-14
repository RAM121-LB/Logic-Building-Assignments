///////////////////////////////////////////////////////
//
//  File name :     A6Question3.c
//  Descreption :   A program to find factorial of given number.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Factoiral of number is : %d",iRet);
    return 0;
}

/*
Output :
Enter number : 5
Factoiral of number is : 120

Enter number : -4
Factoiral of number is : 24
*/