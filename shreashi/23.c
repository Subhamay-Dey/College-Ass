
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase character");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("Lowercase character");
    }
    else {
        printf("Not an alphabet");
    }

    return 0;
}
