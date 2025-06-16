///////////////////////////////////////////////////////
//
//  File name :     A28Question5.c
//  Descreption :   Write application which accept file name from user and one string from user. Write that string at the emd of file.
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
    int fd = 0, iRet = 0;
    char Buffer[30];

    printf("Enter file name : ");
    scanf("%s",Fname);

    printf("Enter data : ");
    scanf("%s",Buffer);

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open.");
        return -1;
    }

    iRet = write(fd,Buffer,strlen(Buffer));
    
    printf("%d of data is successfully written.\n",iRet);
    
    close(fd);

    return 0;
}

/*
Output : 
Enter file name : Don.txt
Enter data : I am Ram
1 of data is successfully written.
*/