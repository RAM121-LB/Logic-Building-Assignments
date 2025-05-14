///////////////////////////////////////////////////////
//
//  File name :     A5Question1.c
//  Descreption :   A program which accept number from user and print that number of $ and * on screen.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

/*
Output :
Enter number : 3
$       *       $       *       $       *

Enter number : 5
$       *       $       *       $       *       $       *       $       *
*/