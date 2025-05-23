///////////////////////////////////////////////////////
//
//  File name :     A12Question3.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
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

Enter Number of Rows : 3
Enter Number of Columns : 5
5       4       3       2       1
5       4       3       2       1
5       4       3       2       1

*/