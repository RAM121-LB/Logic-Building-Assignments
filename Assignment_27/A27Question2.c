///////////////////////////////////////////////////////
//
//  File name :     A27Question2.c
//  Descreption :   A program which accept String and copy only 10 char contents of that string into another string.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrcpyX(char *src, char *dest, int iCnt)
{
    if(src == NULL)
    {
        printf("Unable to get");
        return;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';

}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrcpyX(Arr,Brr,10);

    printf("%s",Brr);

    return 0;
}



/*
Output : 
Marvellous
*/