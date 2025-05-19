///////////////////////////////////////////////////////
//
//  File name :     A8Question1.c
//  Descreption :   A program which accept radius of cirlce from user and calculator its area.Consider value of PI as 3.14.(Area = PI * Radius * Radius)
//  Author :        Ram Madhukar Thakare
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double Area = 0.0;

    Area = PI * fRadius * fRadius;
    
    return Area;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is :%.2f",dRet);

    return 0;
}

/*
Output : 
Enter radius : 2.4
Area of circle is :18.09

Enter radius : -2.3
Area of circle is :16.61
*/

