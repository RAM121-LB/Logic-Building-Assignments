///////////////////////////////////////////////////////
//
//  File name :     A23Question2.c
//  Descreption :   A program which accept character from user and if it small then make capital or if it capital make it small.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c\n",ch);
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
Enter the character : A
a

Enter the character : a
A

Enter the character : 1
1
*/