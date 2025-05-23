///////////////////////////////////////////////////////
//
//  File name :     A11Question1.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0;
    char Ch = '\0';

    for(iCnt = 1, Ch = 'A'; iCnt <= iNo; iCnt++,Ch++)
    {
        printf("%c\t",Ch);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}

/*
Output : 
Enter Number : 5
A       B       C       D       E
*/