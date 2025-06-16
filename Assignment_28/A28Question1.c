///////////////////////////////////////////////////////
//
//  File name :     A28Question1.c
//  Descreption :   Write application which accept file name from user and open that file in read mode.
//  Author :        Ram Madhukar Thakare
//  Date :          14/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("Enter file name : ");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to open.");
        return -1;
    }
    else
    {
        printf("File gets succesfully created at fd : %d\n",fd);
    }

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open.");
        return -1;
    }
    else
    {
        printf("File is succesfully opened at fd : %d",fd);

    }
    close(fd);

    return 0;
}

/*
Output : 
Enter file name : Hello.txt
File gets succesfully created at fd : 3
File is succesfully opened at fd : 4

*/