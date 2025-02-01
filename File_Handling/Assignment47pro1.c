#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];

    printf("please enter file  name that want to open \n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);
    
    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else{
        printf("file opened suceesfully \n");
        close(fd);
    }

    return 0;

}