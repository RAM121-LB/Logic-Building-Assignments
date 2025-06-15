///////////////////////////////////////////////////////
//
//  File name :     A26Question2.c
//  Descreption :   A program which accept String and character from user and return frequency of that character.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{ 
    int iCount = 0;

    while(*str != '\0')
    {
        if(ch == *str)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you want to check : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is : %d",iRet);
   
    return 0;
}

/*
Output : 
Enter string : Marvellous Infosystem
Enter the character which you want to check : l
Character frequency is : 2


*/