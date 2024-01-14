//program to find n fibonacci number using recursion
#include <stdio.h>
void fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    printf("%d %d ",a,b);
    for(int i=0; i<n-2; i++){
        c = a+b;
        printf("%d ",c);
        int tem = a;
        a = b;
        b = c;
    }
    return;
}
int main(){
    int n;
    printf("Enter value for n : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
