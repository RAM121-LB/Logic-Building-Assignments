///////////////////////////////////////////////////////
//
//  File name :     A20Question5.c
//  Descreption :   A program which accept N number from user and return product of all odd elements.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }
    return iMult;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    printf("Enter number of elements : ");
    scanf("%d",&iSize);
    
    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iSize);
    
    printf("Product of odd elements : %d",iRet);

    free(p);

    return 0;
}

/*
Enter number of elements : 6
Enter 6 elements
Enter elements 1 : 15
Enter elements 2 : 66
Enter elements 3 : 3
Enter elements 4 : 70
Enter elements 5 : 10
Enter elements 6 : 88
Product of odd elements : 45

*/