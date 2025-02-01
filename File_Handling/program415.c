#include<stdio.h>
#include<unistd.h>


int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

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