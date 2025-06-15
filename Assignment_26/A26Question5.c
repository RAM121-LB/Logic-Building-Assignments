///////////////////////////////////////////////////////
//
//  File name :     A26Question5.c
//  Descreption :   A program which accept String and character from user and reverse that string in place.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void strrevX(char *str)
{ 
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    
    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--; 
    }
}
int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Modified string is : %s",Arr);
   
    return 0;
}

/*
Output : 
Enter string : abcd
Modified string is : dcba

*/