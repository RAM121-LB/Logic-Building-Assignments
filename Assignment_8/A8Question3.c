///////////////////////////////////////////////////////
//
//  File name :     A8Question3.c
//  Descreption :   A program which accept distance in kilometer and convert it into meter.(1 km = 1000 meter)
//  Author :        Ram Madhukar Thakare
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iMeter = 0;

    if(iNo < 0 )
    {
        printf("Invalid Input\n");
    }

    iMeter = iNo * 1000;

    return iMeter;
}
int main()
{
    int iValue =0, iRet = 0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Kilometer to meter is :%d",iRet);

    return 0;
}

/*
Output : 
Enter distance :13
Kilometer to meter is :13000

*/

