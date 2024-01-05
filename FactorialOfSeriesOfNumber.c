//Program to find the factorial of first n number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    int factValue = 1;
    for(int i=1; i<=n; i++){
        factValue *= i;
        printf("\nThe factorial of %d : %d",i,factValue);
    }
    return 0;
}
