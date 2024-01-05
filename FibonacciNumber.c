//Program to print the nth fabonacci number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 1;
    for (int i=1;i<=n-2;i++){
        sum = a+b;
        a = b;
        b = sum;
    }
    printf("Fabonacci number for %dth term : %d",n,sum);
    return 0;
}
