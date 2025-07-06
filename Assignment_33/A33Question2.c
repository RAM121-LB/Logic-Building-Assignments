///////////////////////////////////////////////////////
//
//  File name :     A33Question2.c
//  Descreption :   Wirte a program which accept two number from user and display position of common ON bits from that two numbers.
//  Author :        Ram Madhukar Thakare
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iResult1 = 0, iResult2 = 0;
    int iCount = 0, iCnt = 0;
    UINT iMask = 1;

    for(iCnt = 0; iCnt < 32; iCnt++)
    {
        iMask = iMask << iCnt;

        iResult1 = iNo1 & iMask;
        iResult2 = iNo2 & iMask;
        
        if((iResult1 == iMask) && (iResult2 == iMask))
        {
            printf("%d\t",iCnt+1);
        }

        iMask = 1;
    }    
}
int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter the 1st number : \n");
    scanf("%u",&iValue1);
    
    printf("Enter the 2nd number : \n");
    scanf("%u",&iValue2);
    
    CommonBits(iValue1,iValue2);
    
    return 0;
}
/*
Output : 
Enter the 1st number :
20
Enter the 2nd number :
21
3       5

Enter the 1st number :
10
Enter the 2nd number :
15
2       4

*/