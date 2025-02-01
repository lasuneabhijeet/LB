#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>



int main()
{
    
    char Name[30];
    char Arr[20] = {'\0'};
    
    int fd = 0;
    
    printf("please enter the file name that you want to OPEN \n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    lseek(fd,-10,SEEK_END);

    read(fd,Arr,5);

    printf("Data from file is : %s \n",Arr);

    

    

    close(fd);

    


    
    return 0;
}
// SEEK_SET    Surwatipasun
// SEEK_CUR     Atta jithe aje tithun
// SEEK_END     Shewatapasun