///////////////////////////////////////////////////////
//
//  File name :     A8Question5.c
//  Descreption :   A program which accept area in square feet and convert it into square meter.(1 square feet = 0.0929 square meter)
//  Author :        Ram Madhukar Thakare
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
double FeettoSquare(int iNo)
{
    double iSqu = 0.0;

    iSqu = iNo * 0.0929;

    return iSqu;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = FeettoSquare(iValue);

    printf("Temperature is : %f",dRet);

    return 0;
}

/*

Output : 
Enter area in square feet : 5
Temperature is : 0.464500

*/

