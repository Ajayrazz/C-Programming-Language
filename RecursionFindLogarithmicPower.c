//program that uses recursion to find logarithmic power 
#include <stdio.h>
int powerLog(int x, int y){
    if(y==0) return 1;
    int m = powerLog(x,y/2);
    if(y%2==0){
        return m*m;
    } else {
        return m*m*x;
    }
}
int main(){
    int a,b;
    printf("Enter value for a : ");
    scanf("%d",&a);
    printf("Enter value for b : ");
    scanf("%d",&b);
    int p = powerLog(a,b);
    printf("%d raised to the power %d is %d.",a,b,p);
    return 0;
    
}
