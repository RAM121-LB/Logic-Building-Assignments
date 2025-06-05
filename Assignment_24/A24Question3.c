///////////////////////////////////////////////////////
//
//  File name :     A24Question3.c
//  Descreption :   A program which accept String from user and return difference between frequency of small and capital character.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCnt1 = 0, iCnt2 = 0, iDiff = 0;

    if(str == NULL)
    {
        printf("Error");
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt1++;
        }
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt2++;
        }
        str++;
    }

    printf("Capital : %d\n",iCnt1);
    printf("Small : %d\n",iCnt2);

    iDiff = iCnt1 - iCnt2;

    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Number of Small character are : %d",iRet);

    return 0;
}

/*
Output :
Enter string : Ram Thakare
Capital : 2
Small : 8
Number of Small character are : -6

*/