//Program to find sum of all even digit of a given number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n>0){
        int lastDigit = n%10;
        if (lastDigit%2==0){
            sum += lastDigit;
        } else;
        n = n/10;
    }
    printf("Sum of all even digit of a given number : %d",sum);
    return 0;
}
