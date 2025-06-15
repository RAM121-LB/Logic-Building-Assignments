///////////////////////////////////////////////////////
//
//  File name :     A27Question3.c
//  Descreption :   A program which accept String and copy captial character of that string into another string.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrcpyCap(char *src, char *dest)
{
    if(src == NULL)
    {
        printf("Unable to get");
        return;
    }

    while((*src != '\0'))
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';

}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrcpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}



/*
Output : 
MMOS
*/