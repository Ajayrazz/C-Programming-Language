//Program to print reverse of a number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reversed Number : \n");
    while(n>0){
        int lastDigit = n%10;
        printf("%d",lastDigit);
        n = n/10;
    }
    return 0;
}
