//program to print pattern of character triangle 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=i; j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
