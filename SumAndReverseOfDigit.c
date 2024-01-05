//Program to print sum of a given number and its reverse
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int reverse = 0;
    while(n>0){
        int lastDigit = n%10;
        reverse += lastDigit;
        reverse *= 10;
        sum += lastDigit;
        n = n/10;
    }
    printf("\nSum of a given number : %d",sum);
    printf("\nReversed Number : %d",reverse);
    return 0;
}
