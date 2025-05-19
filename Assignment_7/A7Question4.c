///////////////////////////////////////////////////////
//
//  File name :     A7Question4.c
//  Descreption :   A program to find odd factorial of given number.
//  Author :        Ram Madhukar Thakare
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0;

}

/*
Output : 
Enter number : 5
Odd factorial of number is 15

Enter number : -11
Odd factorial of number is 10395
*/
