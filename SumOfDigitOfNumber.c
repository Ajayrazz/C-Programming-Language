//Program to count digit of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    while(n>0){
        int lastDigit = n%10;
        sum += lastDigit;
        n = n/10;
    }
    printf("Sum of digit of given number : %d",sum);
    return 0;
}
