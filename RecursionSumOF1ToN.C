//program to print sum from 1 to n using recursion (Paramerised).
#include <stdio.h>
void sum(int a, int b){
    if(a==0){
        printf("Sum value : %d",b);
        return;
    }
    sum(a-1,b+a);
    return;
}
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
