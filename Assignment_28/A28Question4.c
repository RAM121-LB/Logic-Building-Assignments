///////////////////////////////////////////////////////
//
//  File name :     A28Question4.c
//  Descreption :   Write application which accept file name from user and display size of file .
//  Author :        Ram Madhukar Thakare
//  Date :          14/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iSum = 0;
    char Buffer[30];

    printf("Enter file name : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open.");
        return -1;
    }
    while((iRet = read(fd,Buffer,15)) != 0)
    {
        iSum = iSum + iRet;
    }
    printf("File size is : %d",iSum);
    
    close(fd);
    
    return 0;
}

/*
Output : 
Enter file name : Don.txt
File size is : 16
*/