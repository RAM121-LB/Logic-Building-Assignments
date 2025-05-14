///////////////////////////////////////////////////////
//
//  File name :     A2Question5.c
//  Descreption :   Accept number from user and check whether number is even or odd
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Value is even");
    }
    else if(bRet == FALSE)
    {
        printf("Value is odd");
    }
    return 0;
}

/*
Output :

Enter number : 3
Value is odd

Enter number : 4
Value is even
*/