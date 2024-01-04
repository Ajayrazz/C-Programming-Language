//Program to find a number which is divisible by 3 or 5 but not by 15.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            printf("Given number is divisible by 3 or 5 but not by 15.");
        }
        else{
            printf("Given number is divisible by 3 or 5 and 15 too.");
        }
    }
    else{
        printf("Given number is neither divisible by 3 nor divisible by 5.");
    }
}
