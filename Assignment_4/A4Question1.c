///////////////////////////////////////////////////////
//
//  File name :     A4Question1.c
//  Descreption :   A program which accept number from user and display its multiplication of factors.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
int MultFact(int iNo)
{

    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplcation of factors is :%d ",iRet);

    return 0;
}

/*
Output :
Enter number : 24
Multiplcation of factors is :13824

Enter number : -12
Multiplcation of factors is :1

Enter number : 0
Multiplcation of factors is :1

*/