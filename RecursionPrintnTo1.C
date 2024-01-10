//program to print n to 1 using recursion
#include <stdio.h>
void decreasing(int a, int b){
    while(b>=a){
        printf("%d\n",b);
        b--;
    }
    return;
}
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    decreasing(1,n);
    return 0;
}
