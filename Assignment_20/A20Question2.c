///////////////////////////////////////////////////////
//
//  File name :     A20Question2.c
//  Descreption :   A program which accept N number from user and accept another number as number and return index value of that number.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FirstOcc(p,iSize, iValue);

    printf("%d is at : %d",iValue,iRet);
    
    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 4
Enter 4 elements
Enter elements 1 : 21
Enter elements 2 : 31
Enter elements 3 : 41
Enter elements 4 : 51
Enter number : 41
41 is at : 2
*/