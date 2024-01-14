//program that calculate the sum of all element in the user given array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int totalSum = 0;
    for(int j=0; j<n; j++){
        totalSum += arr[j];
    }
    printf("Sum of all the element of the given array : %d",totalSum);
    return 0;
}
