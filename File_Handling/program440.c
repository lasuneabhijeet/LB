#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024



int main()
{
    
    char Name[30];
    char Arr[FILESIZE] = {'\0'};
    int iRet = 0;
    
    int fd = 0;
    
    printf("please enter the file name that you want to OPEN \n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    

    

   
     printf("Data from file is :\n");
    while(iRet = read(fd,Arr,FILESIZE) != 0)
    {
        write(fd,Arr,iRet);
    }
    printf("\n");
   

    

    
    

    

    close(fd);

    


    
    return 0;
}
// SEEK_SET    Surwatipasun
// SEEK_CUR     Atta jithe aje tithun
// SEEK_END     Shewatapasun