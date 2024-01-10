//Program to find the combination of a given number
#include<stdio.h>
int factorial(int a){
    int factValue = 1;
    while(a>0){
        factValue *= a;
        a--;
    }
    return factValue;
}
void combination (int a, int b){
    int fact_a = factorial(a);
    int fact_b = factorial(b);
    int fact_amb = factorial(a-b);
    int combValue = fact_a / (fact_b * fact_amb);
    printf("Combination value of the given input number : %d",combValue);
    return;
}
int main(){
    int x,y;
    printf("Enter first value : ");
    scanf("%d",&x);
    printf("Enter second value : ");
    scanf("%d",&y);
    combination(x,y);
    return 0;
}
