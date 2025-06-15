///////////////////////////////////////////////////////
//
//  File name :     A26Question1.c
//  Descreption :   A program which accept String and character from user and check whether that character is present in string or not.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(ch == *str)
        {
            bFlag = TRUE;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to check : ");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found ");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}

/*
Output : 
Enter string : Marvellous Infosystem
Enter the character which you want to check : e
Character found

Enter string : Marvellous Infosystem
Enter the character which you want to check : W
Character not found
*/