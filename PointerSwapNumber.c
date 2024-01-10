//program to swap two number by using pinter
#include <stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a = 5;
    int b = 8;
    printf("The number before swapping : (%d,%d)\n",a,b);
    swap(&a,&b);
    printf("Number after swapping : (%d,%d)\n",a,b);
    return 0;
}
