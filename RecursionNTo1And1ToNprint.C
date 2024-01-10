//program to print n to 1 and 1 to n using recursion
#include <stdio.h>
void decreIncre(int a){
    if(a==0) return;
    printf("%d\n",a);
    decreIncre(a-1);
    printf("%d\n",a);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    decreIncre(n);
    return 0;
}
