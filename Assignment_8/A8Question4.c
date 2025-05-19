///////////////////////////////////////////////////////
//
//  File name :     A8Question4.c
//  Descreption :   A program which accept temperature in fahrenheit and convert it into celsius.(1 Celsius = (Fahrenheit - 32)*(5/9))
//  Author :        Ram Madhukar Thakare
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
double FhtoCs(float fTemp)
{
    double iCs = 0.0;

    iCs = (fTemp - 32) * (5.0/9.0);

    return iCs;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature is : %f",dRet);

    return 0;
}

/*
Output : 
Enter temperature in Fahrenheit : 44
Temperature is : 6.666667
*/

