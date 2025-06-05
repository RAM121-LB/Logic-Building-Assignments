///////////////////////////////////////////////////////
//
//  File name :     A24Question5.c
//  Descreption :   A program which accept String from user and display it in reverse order .
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void Reverse(char str[])
{
    int iCnt = 0;
    int len = 0;

    if(str == NULL)
    {
        printf("Error");
        return ;
    }

    len = strlen(str);

    for(iCnt = len - 1; iCnt >= 0; iCnt--)
    {
        printf("%c",str[iCnt]);
    }

}

int main()
{
    char Arr[20];
    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}

/*
Output :
Enter string : Ram Thakare
erakahT maR

*/