#include<stdio.h>
int main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    (n>0)? printf("Positive number"):
    (n<0)? printf("Negative number"):
           printf("Zero");

    return 0;
}