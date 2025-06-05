///////////////////////////////////////////////////////
//
//  File name :     A24Question4.c
//  Descreption :   A program which accept String from user and check whether it contains vowels in it or not .
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckVowel(char *str)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    if(str == NULL)
    {
        printf("Error");
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;
    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It contains vowels.");
    }
    else
    {
        printf("It not contains vowels.");

    }

    return 0;
}

/*
Output :
Enter string : Ram Thakare
It contains vowels.

Enter string : xyz
It not contains vowels.
*/