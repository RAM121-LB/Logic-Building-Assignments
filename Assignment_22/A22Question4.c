///////////////////////////////////////////////////////
//
//  File name :     A22Question4.c
//  Descreption :   A program which accept character from user and check whether it is small case or not.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char cValue)
{
    BOOL bFlag = FALSE;

    if((cValue >= 'a') && (cValue <= 'z'))
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

    bRet = CheckSmall(ch);
    
    if(bRet == TRUE)
    {
        printf("It is Small case Character.\n");
    }
    else 
    {
        printf("It is not Small case Character.\n");

    }
    return 0;
}

/*
Output : 
Enter the character : a
It is Small case Character.

Enter the character : 1
It is not Small case Character.

*/