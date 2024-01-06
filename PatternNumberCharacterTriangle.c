//program to print a triangle pattern of number and character
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1;j<=i; j++){
                printf("%d",j);
            }
            printf("\n");
        } else {
            char ch = 'A';
            for(int k=1; k<=i; k++){
                printf("%c",ch);
                ch++;
            }
            printf("\n");
        }
    }
    return 0;
}
