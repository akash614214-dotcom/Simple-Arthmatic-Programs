#include<stdio.h>

int main () 
{
    int a[100], i, n, large;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the digits in Array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    large = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i] > large)
        {
            large = a[i];
        }
    }
    printf("The largest number in the array is: %d", large);
    return 0;
}