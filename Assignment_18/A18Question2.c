///////////////////////////////////////////////////////
//
//  File name :     A18Question2.c
//  Descreption :   A program which accept N number from user and display all such element which are divisible by 5.
//  Author :        Ram Madhukar Thakare
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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
    Display(p,iSize);

    free(p);

    return 0;
}

/*
Output : 
Enter number of elements : 6
Enter 6 elements
Enter elements 1 : 85
Enter elements 2 : 66
Enter elements 3 : 3
Enter elements 4 : 80
Enter elements 5 : 93
Enter elements 6 : 88
85
80

*/