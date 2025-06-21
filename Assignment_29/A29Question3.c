///////////////////////////////////////////////////////
//
//  File name :     A29Question3.c
//  Descreption :   Write program which accepts file name from user and count number of white spaces from that file.
//  Author :        Ram Madhukar Thakare
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define BUFFER_SIZE 50


int CountWhite(char FName[])
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
        while((Read = read(fd,Arr,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < Read; iCnt++)
            {
                if(Arr[iCnt] == ' ')
                {
                    iCount++;
                }
            }
        }
        close(fd);
    }

    return iCount;

}
int main()
{
    char FileName[20];
    int iRet = 0;

    printf("Enter file Name : \n");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

    printf("Number of White spaces are : %d\n",iRet);

    return 0;
}

/*
Output : 

Enter file Name :
Marvellous.txt
Number of White spaces are : 6

*/

/*
[Marvellous.txt]

I am Ram Thakare, PPA 52 Student.

*/