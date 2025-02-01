#include<stdio.h>

/
void StrCpyCap(char *src, char *dest) {
    while (*src != '\0') {
        if (*src >= 'a' && *src <= 'z') {
            *dest = *src - 32; 
        } else {
            *dest = *src; 
        }
        src++;
        dest++;
    }
    *dest = '\0'; 
}

int main() {
    char arr[30] = "marvellous python 2";
    char brr[30];

    StrCpyCap(arr, brr);

    printf("Uppercase string: %s\n", brr);
    return 0;
}

