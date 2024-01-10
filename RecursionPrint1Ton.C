//program to print 1 to n using recursion
#include <stdio.h>
void increasing(int a,int b){
    while(a<=b){
        printf("%d\n",a);
        a++;
    }
    return;
}
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
