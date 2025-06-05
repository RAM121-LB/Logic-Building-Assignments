///////////////////////////////////////////////////////
//
//  File name :     A24Question1.c
//  Descreption :   A program which accept String from user and count number of capital characters.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        printf("Error");
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital character are : %d",iRet);

    return 0;
}

/*
Output :
Enter string : Ram Thakare
Number of capital character are : 2

*/