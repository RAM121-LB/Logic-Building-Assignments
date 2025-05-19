///////////////////////////////////////////////////////
//
//  File name :     A7Question1.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
} 

/*
Output :
Enter number : -5
*       *       *       *       *       #       #       #       #       #

Enter number : 2
*       *       #       #
*/