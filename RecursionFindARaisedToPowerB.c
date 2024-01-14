//program that calculate a raised to the power b using recursion
#include <stdio.h>
int power(int x, int y){
    if(y==0) return 1;
    int val = 1;
    for(int i=1; i<=y; i++){
        val = val * x;
    }
    return val;
}
int main(){
    int a,b;
    printf("Enter value for a : ");
    scanf("%d",&a);
    printf("Enter value for b : ");
    scanf("%d",&b);
    int powerValue = power(a,b);
    printf("%d raised to the power %d is %d.",a,b,powerValue);
    return 0;
}
