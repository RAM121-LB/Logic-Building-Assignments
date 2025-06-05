///////////////////////////////////////////////////////
//
//  File name :     A22Question1.c
//  Descreption :   A program which accept character from user and check whether it is alphabet or not.
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

    if(((cValue >= 'A') && (cValue <= 'Z')) || ((cValue >='a') && (cValue <= 'z')))
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
        printf("It is character.\n");
    }
    else 
    {
        printf("It is not character.\n");

    }
    return 0;
}

/*
Output : 
Enter the character : A
It is character.

Enter the character : 1
It is not character.

Enter the character : @
It is not character.
*/