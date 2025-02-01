#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define FILESIZE 1024

int Countwhite(char FNAME[])
{
    int fd = 0;
    int iRet = 0;
    int Count = 0;
    char Arr[FILESIZE] = {'\0'};

    
    fd = open(FNAME, O_RDONLY);
    if (fd == -1) {
        printf("Unable to open the file\n");
        return -1; 
    }
    while ((iRet = read(fd, Arr, FILESIZE)) > 0) {
       
        for (int i = 0; i < iRet; i++) {
            if (Arr[i] == ' ') { 
                Count++;
            }
        }
    }

    
    close(fd);

    return Count;  
}

int main()
{
    char FileName[30];
    int iRet = 0;

    
    printf("Enter file name: ");
    scanf("%[^'\n']s", FileName); 

    
    iRet = Countwhite(FileName);

    if (iRet != -1) {
        printf("\nNumber of small letters in the file: %d\n", iRet);
    }

    return 0;
}
