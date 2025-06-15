///////////////////////////////////////////////////////
//
//  File name :     A25Question4.c
//  Descreption :   A program which accept String from user and display only digits from that string.
//  Author :        Ram Madhukar Thakare
//  Date :          06/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;
    char *i = NULL;
    int digits = 0;

    if(str == NULL)
    {
        printf("Error");
        return ;
    }

    
    i = str;
    while(*i != '\0')
    {
        char ch = str[iCnt];

        if((ch >= '0' && ch <= '9'))
        {
            printf("%c",ch);
            i++;
            iCnt++;
            digits++;
        }
        else
        {
            i++;
            iCnt++;
        }
    }
    if(digits == 0)
    {
        printf("There is no digits\n");
    }

}

int main()
{
    char Arr[20];
    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}

/*
Output :
Enter string : Ram Thakare 121
121

Enter string : Ram thakare
There is no digits


*/