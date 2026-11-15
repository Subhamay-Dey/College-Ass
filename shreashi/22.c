
#include <stdio.h>

int main() {
    int n, last, secondLast, remaining, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    remaining=n/100;
    last= n%10;
    secondLast=(n/10)%10;

    result=remaining*100 + last*10 + secondLast;

    printf("After exchanging last two digits = %d\n", result);

    return 0;
}
