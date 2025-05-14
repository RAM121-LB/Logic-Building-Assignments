///////////////////////////////////////////////////////
//
//  File name :     A4Question3.c
//  Descreption :   A program which accept number from user and display all its non factors.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
void NonFact(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\n",iCnt);
        }
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

/*
Output :
Enter number : 12
5
7
8
9
10
11

Enter number : 10
3
4
6
7
8
9
*/