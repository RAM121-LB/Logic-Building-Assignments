///////////////////////////////////////////////////////
//
//  File name :     A8Question2.c
//  Descreption :   A program which accept width and height of rectangle from user and calculate its area.(Area = width * Height)
//  Author :        Ram Madhukar Thakare
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
    double Area = 0.0;

    Area = fWidth * fHeight;
    
    return Area;
}
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;

    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of circle is :%.3f",dRet);

    return 0;
}

/*
Output : 
Enter width : 2.34
Enter height : 4.56
Area of circle is :10.670

*/

