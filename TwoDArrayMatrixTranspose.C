//program to print the transpose of a matrix
#include <stdio.h>
int main(){
    int r,c;
    printf("Enter value for rows : ");
    scanf("%d",&r);
    printf("Enter value for column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The original matrix after taking input from user : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix : \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
