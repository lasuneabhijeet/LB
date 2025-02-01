#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];

    printf("please enter name that want to creat \n");
    scanf("%[^'\n']s",Name);

    fd = creat(Name,0777);
    
    if(fd == -1)
    {
        printf("unable to create file\n");
    }
    else{
        printf("file is created suceesfully\n");
    }

    return 0;

}