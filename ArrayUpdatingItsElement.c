//program that uses function to assign a new value to the user given array.
#include <stdio.h>
void update(int nums[]){
    nums[2] = 10;
    return;
}
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    update(arr);
    for(int j=0; j<n; j++){
        printf("%d",arr[j]);
        
    }
    return 0;
    
    
}
