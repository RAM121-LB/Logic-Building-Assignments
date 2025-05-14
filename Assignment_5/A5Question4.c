///////////////////////////////////////////////////////
//
//  File name :     A5Question4.c
//  Descreption :   A program which accept N number from user and print all odd number up to N.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            printf("%d\t",iCnt);
        }                     
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}

/*
Output :
Enter number : 5
1       3       5

Enter number : 18
1       3       5       7       9       11      13      15      17
*/