///////////////////////////////////////////////////////
//
//  File name :     A27Question1.c
//  Descreption :   A program which accept String and copy contents of that string into another string.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrcpyX(char *src, char *dest)
{
    if(src == NULL)
    {
        printf("Unable to get");
        return;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrcpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;
}



/*
Output : 
Marvellous Multi OS
*/