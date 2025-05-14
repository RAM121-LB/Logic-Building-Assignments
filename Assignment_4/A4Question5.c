///////////////////////////////////////////////////////
//
//  File name :     A4Question5.c
//  Descreption :   A program which accept number from user and return difference between summation of all its factors and non factors.
//  Author :        Ram Madhukar Thakare
//  Date :          14/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
int FactDiff(int iNo)
{

    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else if((iNo % iCnt)!=0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }   
    }
    printf("sum of factors : %d\n",iSumFact);
    printf("sum of Non factors : %d\n",iSumNonFact);

    iDiff = iSumFact - iSumNonFact;

    return iDiff;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Summation of Non Factors is : %d",iRet);
    return 0;
}

/*
Output :
Enter number : 12
sum of factors : 28
sum of Non factors : 50
Summation of Non Factors is : -22
*/