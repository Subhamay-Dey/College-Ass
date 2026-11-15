#include<stdio.h>
int main() {
    int a,b, greater;

    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    greater=(a>b)?a:b;

    printf("Greater number =%d\n", greater);
    

    return 0;
}