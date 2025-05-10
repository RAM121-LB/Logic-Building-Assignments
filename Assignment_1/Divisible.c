///////////////////////////////////////////////////////
//
//  File name :     Divisible.c
//  Descreption :   Used accept one number and check whether is divisible by 5 or not
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE -1
int Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else 
    {
        printf("Not Divisible by 5");
    }
    return 0;
} 

/*
Output :
Enter Number :5
Divisible by 5

Enter Number :-1
Not Divisible by 5
*/