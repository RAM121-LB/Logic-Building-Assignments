///////////////////////////////////////////////////////
//
//  File name :     PrintStarDecrement.c
//  Descreption :   Used accept one number from user and print that number of * on screen
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    while(iNo > iCnt)
    {
        printf("*");
        iNo--;
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
Output :
Enter number : 5
*****
*/