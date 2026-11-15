#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    (n&1)? printf("Odd number"):
    printf("Even number");

    return 0;
}