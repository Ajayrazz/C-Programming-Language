//program to find the sum of n term by using recursion {Return Type}
#include <stdio.h>
int sum(int n){
    if(n==0 || n==1) return 1;
    int recAns = n + sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    printf("Sum : %d",sum(n));
    return 0;
}
