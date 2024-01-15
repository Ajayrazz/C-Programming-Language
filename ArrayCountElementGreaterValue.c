//Program to count the number of element which is greater than user given element.
#include <stdio.h>
int main(){
    int n,k;
    printf("Enter value for n : ");
    scanf("%d",&n);
    printf("Enter value for k : ");
    scanf("%d",&k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > k){
            count++;
        }
    }
    printf("There are total %d element which is greater than %d.",count,k);
    return 0;
}
