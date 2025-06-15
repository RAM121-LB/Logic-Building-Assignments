///////////////////////////////////////////////////////
//
//  File name :     A26Question4.c
//  Descreption :   A program which accept String and character from user and return index of first occurrence of that character.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{ 
    int iCnt = 0, LastCnt = 0;

    while(*str != '\0')
    {
        if(ch == *str)
        {
            LastCnt = iCnt;  
        }
        iCnt++;
        str++;
    }

    return LastCnt;
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

    iRet = LastChar(Arr,cValue);

    printf("Character Last location is : %d",iRet);
   
    return 0;
}

/*
Output : 
Enter string : Marvellous Infosystem
Enter the character which you want to check : e
Character Last location is : 19

*/