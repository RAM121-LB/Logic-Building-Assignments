///////////////////////////////////////////////////////
//
//  File name :     A6Question1.c
//  Descreption :   A program which accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large. 
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void Number(int iNo)
{
    if(iNo < 0)
    {
        printf("Invaild Input");
    }
    else if(iNo <= 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo >= 100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}

/*
Output :
Enter number : 50
Small

Enter number : 10
Small

Enter number : -10
Invaild Input

Enter number : 121
Large

Enter number : 0
Small
*/