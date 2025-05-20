///////////////////////////////////////////////////////
//
//  File name :     A9Question1.c
//  Descreption :   A program which accept number from user and display its digits in reverse order.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
void DisplayDigit(int iNo)
{
    int Digit = 0, iRev = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        Digit = iNo % 10;
        printf("%d\n",Digit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

/*
Output : 
Enter Number : 1432
2
3
4
1
*/