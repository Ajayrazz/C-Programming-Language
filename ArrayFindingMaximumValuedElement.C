//program to find the maximum value in the given array.
//Take positive element from the user
#include<stdio.h>
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max = -1;
    for(int j=0; j<n; j++){
        if(max<arr[j]){
            max = arr[j];
        }
        
    }
    printf("Maximun valued element in the given array is %d.",max);
    return 0;
}
