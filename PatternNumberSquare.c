//Program to print a number square pattern
#include <stdio.h>
int main()
{
    int n = 4;
    for(int i=1; i<=n; i++){
        for(int i=1; i<=n; i++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
