///////////////////////////////////////////////////////
//
//  File name :     A27Question4.c
//  Descreption :   A program which accept String and copy small character of that string into another string.
//  Author :        Ram Madhukar Thakare
//  Date :          10/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrcpySmall(char *src, char *dest)
{
    if(src == NULL)
    {
        printf("Unable to get");
        return;
    }

    while((*src != '\0'))
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[30] = "Marvellous multi OS";
    char Brr[30];

    StrcpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}



/*
Output : 
arvellousmulti
*/