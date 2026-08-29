#include <stdio.h>
int main() {
    int n = 5;

    for(int i = 1; i <= (2 * n) - 1; i++) {
        if(i <= n) {
            for(int j = 1; j <= (2 * n) - 1; j++) {
                if(j <= n - i || j >= n + i) {
                    printf(" ");
                } else {
                    printf("*");
                }
            }
            printf("\n");
        } else {
            for(int k = 1; k <= (2 * n) - 1; k++) {
                if(k <= i - n || k > ((2*n)-1) - (i - n) ) {
                    printf(" ");
                } else {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
}