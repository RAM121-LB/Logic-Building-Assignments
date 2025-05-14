///////////////////////////////////////////////////////
//
//  File name :     A4Question2.c
//  Descreption :   A program which accept number from user and display its factors in decreasing order.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
void FactRev(int iNo)
{

    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt)==0)
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

    FactRev(iValue);

    return 0;
}

/*
Output :
Enter number : 12
12
6
4
3
2
1

*/