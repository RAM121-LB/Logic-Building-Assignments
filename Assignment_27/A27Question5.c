///////////////////////////////////////////////////////
//
//  File name :     A27Question5.c
//  Descreption :   A program which accept 2 String from user and concat second string after first string.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    if(src == NULL)
    {
        printf("Unable to get");
        return;
    }

    while((*src != '\0'))
    {
        src++;
    }
    
    *src = ' ';
    src++;

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    
    *src = '\0';

}
int main()
{
    char Arr[50] = "Marvellous multi OS";
    char Brr[30] = "Logic Building";

    StrCatX(Arr,Brr);

    printf("%s",Arr);
    printf("%s",strcat(Arr,Brr));

    return 0;
}



/*
Output : 
Marvellous multi OS Logic Building
*/