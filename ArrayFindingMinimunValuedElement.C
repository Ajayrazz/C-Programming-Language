//program that take integer input from user and finding the minimum valued element.
#include <stdio.h>
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min = -1;
    for(int j=0; j<n; j++){
        if(min>arr[j]){
            min = arr[j];
        }
    }
    printf("Min valued element in the given array is %d.",min);
    return 0;
}
