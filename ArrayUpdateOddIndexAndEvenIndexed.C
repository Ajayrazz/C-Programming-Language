//program that takes array input from user and uses function for changing the odd indexed element to its second multiple and increment all the even indexed element by 10.
#include <stdio.h>
int main(){
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            arr[i] += 10;
        } else {
            arr[i] *= 2;
        }
    }
    printf("{");
    for(int i=0; i<n; i++){
        printf("%d,",arr[i]);
    }
    printf("}");
    return 0;
}
