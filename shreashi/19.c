
#include <stdio.h>

int main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result=n/100;

    printf("After deleting last two digits = %d\n", result);

    return 0;
}
