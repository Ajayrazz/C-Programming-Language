//program that take array input from user and print the reverse of it
#include <stdio.h>
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=n-1; j>=0; j--){
        printf("%d",arr[j]);
    }
    return 0;
}
