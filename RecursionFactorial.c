//program to calculate factorial of n using recursion
#include <stdio.h>
void factorial(int a){
    int fact = 1;
    while(a>0){
        fact *= a;
        a--;
    }
    printf("Factorial of the given number : %d",fact);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
