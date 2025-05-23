///////////////////////////////////////////////////////
//
//  File name :     A13Question2.c
//  Descreption :   A program which accept number from user and display pattern.
//  Author :        Ram Madhukar Thakare
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0;
    char Ch1 = '\0', Ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, Ch1 = 'A', Ch2 = 'a'; j <= iCol; j++, Ch1++, Ch2++)
        {
            if((i % 2)==0)
            {
                printf("%c\t",Ch2);
            }
            else
            {
                printf("%c\t",Ch1);
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
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d



*/