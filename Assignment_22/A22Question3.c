///////////////////////////////////////////////////////
//
//  File name :     A22Question3.c
//  Descreption :   A program which accept character from user and check whether it is digit or not.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char cValue)
{
    BOOL bFlag = FALSE;

    if((cValue >= '0') && (cValue <= '9'))
    {
        bFlag = TRUE;   
    }

    return bFlag;

}

int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);
    
    if(bRet == TRUE)
    {
        printf("It is Digits.\n");
    }
    else 
    {
        printf("It is not Digits.\n");

    }
    return 0;
}

/*
Output : 
Enter the character : 2
It is Digits.

Enter the character : a
It is not Digits.
*/