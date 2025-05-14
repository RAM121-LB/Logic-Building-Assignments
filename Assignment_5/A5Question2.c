///////////////////////////////////////////////////////
//
//  File name :     A5Question2.c
//  Descreption :   A program which accept number from user and print numbers till that number.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int iCunt = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCunt);
        iCunt++;                              
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
1       2       3       4       5
*/