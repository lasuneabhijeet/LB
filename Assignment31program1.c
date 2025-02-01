#include<stdio.h>


void StrCpyRev(char *src, char *dest) {
    char *start = src;
    int length = 0;

    
    while (*src != '\0') {
        src++;
        length++;
    }

    
    src--;

    
    while (length > 0) {
        *dest = *src;
        dest++;
        src--;
        length--;
    }

    
    *dest = '\0';
}

int main() {
    char arr[30] = "MArvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("Reversed string: %s\n", brr);
    return 0;
}