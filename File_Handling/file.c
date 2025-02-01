#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define FILESIZE 1024

int CountCapital(char FNAME[])
{
    int fd = 0;
    int iRet = 0;
    int capitalCount = 0;
    char Arr[FILESIZE] = {'\0'};

    
    fd = open(FNAME, O_RDONLY);
    if (fd == -1) {
        printf("Unable to open the file\n");
        return -1; 
    }

    printf("Data from file is:\n");

    
    while ((iRet = read(fd, Arr, FILESIZE)) > 0) {
       
        write(1, Arr, iRet);

        
        for (int i = 0; i < iRet; i++) {
            if (Arr[i] >= 'A' && Arr[i] <= 'Z') { 
                capitalCount++;
            }
        }
    }

    
    close(fd);

    return capitalCount;  
}

int main()
{
    char FileName[30];
    int iRet = 0;

    
    printf("Enter file name: ");
    scanf("%s", FileName); 

    
    iRet = CountCapital(FileName);

    if (iRet != -1) {
        printf("\nNumber of capital letters in the file: %d\n", iRet);
    }

    return 0;
}
