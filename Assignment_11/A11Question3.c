///////////////////////////////////////////////////////
//
//  File name :     A11Question3.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}

/*
Output : 
Enter Number : 5
1       *       2       *       3       *       4       *       5       *
*/