///////////////////////////////////////////////////////
//
//  File name :     A11Question5.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCount <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d\t",iCnt);
            iCount++; 
        }
        
    }
}


int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}

/*
Output : 
Enter Number : 5
2       4       6       8       10      12
*/