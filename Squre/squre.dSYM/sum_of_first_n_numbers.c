#include<stdio.h>
int main() {
    int i, n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        sum += i;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
    return 0;   
}  