//program to rotate a matrix by 90 degree clock-wise 
#include <stdio.h>
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //print the user given matrix
    printf("Original user given matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    //transpose the given matrix and print it.
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("Transposed of user given matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    // rotate
    for(int i=0; i<n; i++){
        int j = 0;
        int k = n-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    //print the rotated matrix
    printf("Matrix after rotating 90 degree clock-wise : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
