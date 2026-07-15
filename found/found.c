#include <stdio.h>
int main () {
    int A[100], i, n, search, flag=0;
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter the element to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(A[i]==search){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is found at %d position",search, ++i);
    }
    else {
        printf("Element not found!");
    }
    return 0;
}