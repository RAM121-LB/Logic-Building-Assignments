///////////////////////////////////////////////////////
//
//  File name :     A29Question5.c
//  Descreption :   Write program which accepts file name and one count from user and read that number of characters from starting position.
//  Author :        Ram Madhukar Thakare
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define BUFFER_SIZE 50


void Display(char FName[], int iSize)
{
    char Arr[BUFFER_SIZE];
    int iCount = 0, iCnt = 0;
    int fd = 0, Read = 0;

    fd = open(FName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to Open.\n");
    }
    else
    {
        Read = read(fd,Arr,iSize);

        for(iCnt = 0; iCnt < Read; iCnt++)
        {
            printf("%c",Arr[iCnt]);
        }

        close(fd);
    }
}
int main()
{
    char FileName[20];
    int iValue = 0;

    printf("Enter file Name : \n");
    scanf("%s",FileName);

    printf("Enter the Count : \n");
    scanf(" %d",&iValue);

    Display(FileName,iValue);

    return 0;
}

/*
Output : 

Enter file Name :
Marvellous.txt
Enter the Count :
9
I am Ram

*/

/*
[Marvellous.txt]

I am Ram Thakare, PPA 52 Student.

*/