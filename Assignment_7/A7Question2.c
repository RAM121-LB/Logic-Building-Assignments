///////////////////////////////////////////////////////
//
//  File name :     A7Question2.c
//  Descreption :   A program which accept amount in US dollar and return its corresponding value in indian currency.Consider 1$ as 70 rupees.
//  Author :        Ram Madhukar Thakare
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>
int DollarToINR(int iNo)
{
    int INR = 0;

    INR = iNo * 70;
    return INR;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);
    
    return 0;
} 

/*
Output : 
Enter number of USD : 2000
Value in INR is 140000

Enter number of USD : 3
Value in INR is 210

Enter number of USD : 10
Value in INR is 700
*/
