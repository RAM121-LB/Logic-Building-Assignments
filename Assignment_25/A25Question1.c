///////////////////////////////////////////////////////
//
//  File name :     A25Question1.c
//  Descreption :   A program which accept String from user and convert it into lower case.
//  Author :        Ram Madhukar Thakare
//  Date :          06/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
    int iCnt = 0;
    char *i = NULL;

    if(str == NULL)
    {
        printf("Error");
        return ;
    }
    i = str;
    while(*i != '\0')
    {
        char ch = str[iCnt];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                ch = ch + 32;
            }
            printf("%c",ch);
            i++;
            iCnt++;
        }
        else
        {
            printf(" ");
            i++;
            iCnt++;
        }
    }

}

int main()
{
    char Arr[20];
    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    return 0;
}

/*
Output :
Enter string : Ram
ram

*/