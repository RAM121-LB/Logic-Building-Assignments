///////////////////////////////////////////////////////
//
//  File name :     A5Question3.c
//  Descreption :   A program which accept number from user and print its numbers line.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);                     
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
Enter number : 5
-5      -4      -3      -2      -1      0       1       2       3       4       5

Enter number : 2
-2      -1      0       1       2
*/