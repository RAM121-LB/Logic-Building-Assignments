///////////////////////////////////////////////////////
//
//  File name :     A23Question5.c
//  Descreption :   A program which accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("It's Decimal Values is : %d\n",ch);
    printf("It's Octal Values is : %o\n",ch);
    printf("It's Hexadecimal Values is : %x\n",ch);
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
It's Decimal Values is : 65
It's Octal Values is : 101
It's Hexadecimal Values is : 41

Enter the character : 2
It's Decimal Values is : 50
It's Octal Values is : 62
It's Hexadecimal Values is : 32
*/