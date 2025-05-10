///////////////////////////////////////////////////////
//
//  File name :     Question4.c
//  Descreption :   Accept two number from user and display first number in second number of times.
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo , int iFrequency)
{
    int i = 0;
    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;

}

/*
Output : 
Enter number : 5
Enter frequency : 5
5       5       5       5       5

Enter number : -2
Enter frequency : 3
-2      -2      -2

Enter number : 21
Enter frequency : -3

Enter number : -1
Enter frequency : 0

*/