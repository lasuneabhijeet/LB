#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define FILESIZE 1024

void DisplayN(char FNAME[],int iSize)
{
    int fd = 0;
    int iRet = 0;
    int Count = 0;
    char Arr[FILESIZE] = {'\0'};

    
    fd = open(FNAME, O_RDONLY);
    if (fd == -1) {
        printf("Unable to open the file\n");
        return;
        
    }
   
    iRet = read(fd, Arr, iSize);
    

    printf("Data from file is : %s\n",Arr);
    
 
        

    
    close(fd);

      
}

int main()
{
    char FileName[30];
    int iRet = 0;
   int iValue =0;

    
    printf("Enter file name: ");
    scanf("%[^'\n']s", FileName); 

    printf("Enter the number of  character \n");
    scanf(" %d",&iValue);

    
   DisplayN(FileName,iValue);

   
    return 0;
}
