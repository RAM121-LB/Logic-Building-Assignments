///////////////////////////////////////////////////////
//
//  File name :     A13Question3.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;
    char Ch = '\0';

    for(i = 1, Ch = 'A'; i <= iRow; i++, Ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",Ch);
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
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C

*/