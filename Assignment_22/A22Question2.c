///////////////////////////////////////////////////////
//
//  File name :     A22Question2.c
//  Descreption :   A program which accept character from user and check whether it is Capital or not.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char cValue)
{
    BOOL bFlag = FALSE;

    if((cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheckAlpha(ch);
    
    if(bRet == TRUE)
    {
        printf("It is Capital.\n");
    }
    else 
    {
        printf("It is not Capital.\n");

    }
    return 0;
}

/*
Output : 
Enter the character : A
It is Capital.

Enter the character : a
It is not Capital.

*/