///////////////////////////////////////////////////////
//
//  File name :     A24Question2.c
//  Descreption :   A program which accept String from user and count number of small characters.
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
        if((*str >= 'a') && (*str <= 'z'))
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

    printf("Number of Small character are : %d",iRet);

    return 0;
}

/*
Output :
Enter string : Ram Madhukar THakare
Number of Small character are : 14

*/