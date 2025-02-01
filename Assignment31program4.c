#include<stdio.h>


void StrCpySmall(char *src, char *dest) {
    while (*src != '\0') {
        if (*src >= 'A' && *src <= 'Z') {
            *dest = *src + 32; 
        }
         else {
            *dest = *src; 
        }
        src++;
        dest++;
    }
    *dest = '\0'; 
}

int main() {
    char arr[30] = "MARVELLOUS PYTHON 2";
    char brr[30];

    StrCpySmall(arr, brr);

    printf("Uppercase string: %s\n", brr);
    return 0;
}

