///////////////////////////////////////////////////////
//
//  File name :     A14Question1.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0,iCnt = 0;
    
    for(i = 1,iCnt = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iCnt++)
        {
            if(iCnt > 9)
            {
                iCnt = 1;
            }
            printf("%d\t",iCnt);  
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
5       6       7       8
9       1       2       3
4       5       6       7



*/