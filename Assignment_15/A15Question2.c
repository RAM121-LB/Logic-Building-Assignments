///////////////////////////////////////////////////////
//
//  File name :     A15Question2.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          22/05/2025
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
            if(i <= j)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }


}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}


/*
Output : 
Enter number of Rows : 4
Enter number of Columns : 4
*       *       *       *
*       *       *       #
*       *       #       #
*       #       #       #

*/