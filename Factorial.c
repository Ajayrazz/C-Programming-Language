//Program to find factorial of a given number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int value = 1;
    for(n;n>0;n--){
        value *= n;
    }
    printf("Factorial of the given number : %d",value);
    return 0;
}
