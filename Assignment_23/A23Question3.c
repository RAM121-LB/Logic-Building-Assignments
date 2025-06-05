///////////////////////////////////////////////////////
//
//  File name :     A23Question3.c
//  Descreption :   A program which accept character from user and if it capital then display all the character from the input character till Z. if input character is small then print all the character in reverse order till a.in other cases return directly. 
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch; iCnt <= 'Z';iCnt++)
        {
           printf("%c\t",iCnt); 
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
       printf("Invaild input");
    }
    
}

int main()
{
    char cValue = 0;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}

/*
Output : 
Enter the character : b
b       a

Enter the character : A
A       B       C       D       E       F       G       H       I       J       K       L       M       N       O
        P       Q       R       S       T       U       V       W       X       Y       Z

Enter the character : 2
Invaild input
*/