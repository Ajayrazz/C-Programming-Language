//Program to find the difference between sum of element of odd indices and even indices
#include <stdio.h>
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sumEvenIndex = 0;
    int sumOddIndex = 0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            sumEvenIndex += arr[i];
        } else {
            sumOddIndex += arr[i];
        }
    }
    int diff = sumEvenIndex - sumOddIndex;
    printf("Difference between the sum of even index element and odd index element is %d.",diff);
    return 0;
}
