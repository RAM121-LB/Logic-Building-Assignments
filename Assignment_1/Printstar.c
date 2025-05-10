///////////////////////////////////////////////////////
//
//  File name :     Printstar.c
//  Descreption :   Used accept one number from user and print that number of  on screen
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    
    iValue = 5;

    Accept(iValue);
    return 0;

}

/*
Output :
Enter number of Times which star has to be Print :6
******
*/
