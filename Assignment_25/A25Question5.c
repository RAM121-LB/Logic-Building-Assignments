///////////////////////////////////////////////////////
//
//  File name :     A25Question5.c
//  Descreption :   A program which accept String from user and count number of white spaces.
//  Author :        Ram Madhukar Thakare
//  Date :          06/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    char *i = NULL;
    int spaces = 0;

    if(str == NULL)
    {
        printf("Error");
        return -1;
    }

    
    i = str;
    while(*i != '\0')
    {
        char ch = str[iCnt];

        if((ch == ' '))
        {
            i++;
            iCnt++;
            spaces++;
        }
        else
        {
            i++;
            iCnt++;
        }
    }
    return spaces;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("%d\n",iRet);

    return 0;
}

/*
Output :
Enter string : Ram Thakare currently studying in computer science
6


*/