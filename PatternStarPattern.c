//Program to print a pattern of Star Triangle by taking input n from user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Value : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
