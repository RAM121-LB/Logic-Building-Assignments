///////////////////////////////////////////////////////
//
//  File name :     A14Question2.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0, iCnt = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        if((i % 2)!=0)
        {
            for(j = 1, iCnt = 1; iCnt <= iCol; j++)
            {
                if((j % 2)==0)
                {
                    printf("%d\t",j);
                    iCnt++;
                }
            }
        }
        else
        {
            for(j = 1,iCnt = 1; iCnt <= iCol; j++)
            {
                if((j % 2)!=0)
                {
                    printf("%d\t",j);
                    iCnt++;
                }
            }
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
2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7



*/