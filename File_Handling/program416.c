#include<stdio.h>
#include<unistd.h>



int main()
{
    int fd = 0;
    char Name[30];
    printf("please enter the file name that you want to creat\n");
    scanf("%[^'\n']s",Name);


    fd = creat(Name,0777);

    if(fd == -1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
        printf("File uccesfully created\n");
    }
    return 0;
}