///////////////////////////////////////////////////////
//
//  File name :     A29Question1.c
//  Descreption :   Write program which accepts file name from user and count number of capital characters from that file.
//  Author :        Ram Madhukar Thakare
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define BUFFER_SIZE 50


int CountCapital(char FName[])
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
                if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
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

    iRet = CountCapital(FileName);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}

/*
Output : 
Enter file Name :
Marvellous.txt
Number of capital characters are : 7

*/

/*
[Marvellous.txt]

I am Ram Thakare, PPA 52 Student.

*/