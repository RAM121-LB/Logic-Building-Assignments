///////////////////////////////////////////////////////
//
//  File name :     A5Question5.c
//  Descreption :   A program which accept N number from user and print first 5 multiples of N.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = iNo;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);                     
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}

/*
Output :
Enter number : 5
5       10      15      20      25

Enter number : 13
13      26      39      52      65
*/