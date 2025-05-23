///////////////////////////////////////////////////////
//
//  File name :     A14Question5.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          22/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0, iCnt1 = 0, iCnt2 = 0;

    for(i = 1, iCnt1 = 1; i <= iRow; i++,iCnt1++)
    {
        for(j = 1, iCnt2 = 0; j <= iCol; j++, iCnt2++)
        {
            printf("%d\t",iCnt1+iCnt2);
        }
        printf("\n");
    }
    
}




int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : ");
    scanf("%d",&iValue1);
    
    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}

/*
Output :
Enter Number of Rows : 4
Enter Number of Columns : 4
1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7

*/