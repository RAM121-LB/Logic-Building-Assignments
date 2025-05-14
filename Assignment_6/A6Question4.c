///////////////////////////////////////////////////////
//
//  File name :     A6Question4.c
//  Descreption :   A program which accept number from user and display its table.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iMul = iNo;

    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);
    return 0;
}

/*
Output :
Enter number : 4
4
8
12
16
20
24
28
32
36
40

Enter number : 14
14
28
42
56
70
84
98
112
126
140
*/