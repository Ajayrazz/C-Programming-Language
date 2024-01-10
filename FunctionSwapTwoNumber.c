//program that uses function to swap two user given number and without using third variable
#include <stdio.h>
void swap(int a, int b){
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After Swapping : (%d,%d)\n",a,b);
    return a,b;
}
int main(){
    int x,y;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);
    printf("Before Swapping : (%d,%d)\n",x,y);
    swap(x,y);
    return 0;
}
