#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>



int main()
{
    
    char Name[30];
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int fd = 0;
    
    printf("please enter the file name that you want to OPEN \n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    lseek(fd,5,0);
    read(fd,Arr,10);
    printf("data from file is : %s\n",Arr);

    close(fd);

    


    
    return 0;
}
// SEEK_SET    Surwatipasun
// SEEK_CUR     Atta jithe aje tithun
// SEEK_END     Shewatapasun