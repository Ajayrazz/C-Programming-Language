//Program that tell whether the given number is Three Digit number or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if ((n>99) && (n<1000)){
        printf("Given number is a three digit number.\n");
    }
    else{
        printf("Given number is not a three digit number.");
    }
    return 0;
}
