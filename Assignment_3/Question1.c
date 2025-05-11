///////////////////////////////////////////////////////
//
//  File name :     Question1.c
//  Descreption :   Program whic accept onr number from user and print that number of even number on screen
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int cnt = 1;

    if(iNo <= 0)
    {
        return;
    }
    
    for(iCnt = 1; cnt <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d\t",iCnt);
            cnt++;
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}

/*
Output :
Enter number :
6
2       4       6       8       10      12
*/