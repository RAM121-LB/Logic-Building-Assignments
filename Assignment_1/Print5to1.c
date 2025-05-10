///////////////////////////////////////////////////////
//
//  File name :     Print5to1.c
//  Descreption :   Used to print 5 to 1 on screen
//  Author :        Ram Madhukar Thakare
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();
}

/*
Output : 
5
4
3
2
1
*/