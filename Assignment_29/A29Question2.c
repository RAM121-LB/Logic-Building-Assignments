///////////////////////////////////////////////////////
//
//  File name :     A29Question2.c
//  Descreption :   Write program which accepts file name from user and count number of small characters from that file.
//  Author :        Ram Madhukar Thakare
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define BUFFER_SIZE 50


int CountSmall(char FName[])
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
                if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
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

    iRet = CountSmall(FileName);

    printf("Number of small characters are : %d\n",iRet);

    return 0;
}

/*
Output : 

Enter file Name :
Marvellous.txt
Number of small characters are : 16

*/

/*
[Marvellous.txt]

I am Ram Thakare, PPA 52 Student.

*/