///////////////////////////////////////////////////////
//
//  File name :     A2Question3.c
//  Descreption :   Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo"
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else 
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*
Output:
Enter number : 5
Hello

Enter number : 11
Demo
*/