//program to print a raised to the power b by using recursion
#include <stdio.h>
void power(int a,int b){
    int m = 1;
    for(int i=1; i<=b; i++){
        m = m*a;
    }
    printf("%d raised to power %d is %d.",a,b,m);
    return;
}
int main(){
    int x,y;
    printf("Enter a value : ");
    scanf("%d",&x);
    printf("Enter second value : ");
    scanf("%d",&y);
    power(x,y);
    return 0;
}
