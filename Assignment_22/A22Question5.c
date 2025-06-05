///////////////////////////////////////////////////////
//
//  File name :     A22Question5.c
//  Descreption :   A program which accept character from user and display exam timing.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char cValue)
{
    if((cValue == 'A') || (cValue == 'a'))
    {
        printf("Your exam at 7 am");
    }
    else if((cValue == 'B') || (cValue == 'b'))
    {
        printf("Your exam at 8.30 am");
    }
    else if((cValue == 'C') || (cValue == 'c'))
    {
        printf("Your exam at 9.20am");
    }
    else if((cValue == 'D') || (cValue == 'd'))
    {
        printf("Your exam at 10.30 am");
    }
    else
    {
        printf("Invaild input");
    }
}

int main()
{
    char ch = '\0';

    printf("Enter the character : ");
    scanf("%c",&ch);

    DisplaySchedule(ch);
    
    return 0;
}

/*
Output : 
Enter the character : C
Your exam at 9.20am

Enter the character : a
Your exam at 7 am

Enter the character : 1
Invaild input
*/