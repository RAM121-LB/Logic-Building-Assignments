///////////////////////////////////////////////////////
//
//  File name :     A20Question4.c
//  Descreption :   A program which accept N number from user and accept range and Display all elements from that range.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0, iRange = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
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

    printf("Start : ");
    scanf("%d",&iStart);

    printf("End : ");
    scanf("%d",&iEnd);

    Range(p,iSize, iStart, iEnd);
    
    free(p);

    return 0;
}

/*
Enter number of elements : 6
Enter 6 elements
Enter elements 1 : 21
Enter elements 2 : 31
Enter elements 3 : 41
Enter elements 4 : 15
Enter elements 5 : 61
Enter elements 6 : 13
Start : 20
End : 50
21
31
41

*/