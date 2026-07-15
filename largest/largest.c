#include<stdio.h>

int main () {
    int A[100], i, n, temp, large;
    printf("Enter the numbers of Elements !");
    scanf("%d", &n);
    printf("Enter the velues in it :  ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    large = A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]>=large)
        {
            temp = A[i];
            large = temp;
        }
    }
    printf("Largest number is %d", large);
    return 0;
}