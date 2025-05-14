///////////////////////////////////////////////////////
//
//  File name :     A6Question5.c
//  Descreption :   A program which accept number from user and display its table in reverse.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iMul = iNo;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMul = iNo * iCnt;
        printf("%d\n",iMul);                     
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}

/*
Output :
Enter number : -5
50
45
40
35
30
25
20
15
10
5

Enter number : 4
40
36
32
28
24
20
16
12
8
4
*/