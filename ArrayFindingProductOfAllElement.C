//program to find the product of all element in the user given array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int product = 1;
    for(int j=0; j<n; j++){
        product *= arr[j];
    }
    printf("Product value of all element of the given array : %d.",product);
    return 0;
