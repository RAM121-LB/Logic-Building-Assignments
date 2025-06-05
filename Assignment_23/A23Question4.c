///////////////////////////////////////////////////////
//
//  File name :     A23Question4.c
//  Descreption :   A program which accept character from user and chech whether it is special symbol or not.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSpecial(char ch)
{
    BOOL bFlag = FALSE;

    if(!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')))
    {
        bFlag = TRUE;
    }
    return bFlag;    
}

int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is special Character.");
    }
    else
    {
        printf("It is not special character.");
    }
    return 0;
}

/*
Output : 
Enter the character : A
It is not special character.

Enter the character : @
It is special Character.

Enter the character : 6
It is not special character.
*/