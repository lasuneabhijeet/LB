#include<stdio.h>

void StrCpyX(char *src, char *dest) {
    while (*src != '\0') {
       
        if (*src != ' ') {
            *dest = *src;
            dest++;
        }
        src++;
    }
    
    *dest = '\0';
}

int main() {
    char arr[30] = "MArvel lous Pyth on";
    char brr[30];

    StrCpyX(arr, brr);

    printf("String without spaces: %s\n", brr);
    return 0;
}
