#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>



int main()
{
    
    char Name[30];
    char Arr[10] = {'\0'};
    int iRet = 0;
    
    int fd = 0;
    
    printf("please enter the file name that you want to OPEN \n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    iRet = read(fd,Arr,10);

    write(1,Arr,iRet);

    iRet =read(fd,Arr,10);
    write(1,Arr,iRet);

    

    iRet =read(fd,Arr,10);
    write(1,Arr,iRet);

    

    
    

    

    close(fd);

    


    
    return 0;
}
// SEEK_SET    Surwatipasun
// SEEK_CUR     Atta jithe aje tithun
// SEEK_END     Shewatapasun